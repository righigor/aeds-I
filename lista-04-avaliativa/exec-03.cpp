#include <cstring>
#include <iostream>

using namespace std;

class ContaCorrente {
protected:
  char conta[100];
  float saldo;

public:
  ContaCorrente() {
    conta[0] = '\0';
    saldo = 0;
  }
  ContaCorrente(char *c, float s) {
    strcpy(conta, c);
    saldo = s;
  }

  float getSaldo() { return saldo; }

  void depositar(float valor) { saldo += valor; }
  virtual void sacar(float valor) {
    float taxa = valor * 0.005;
    cout << "Saque com taxa de 0.5%." << endl;
    cout << "Taxa: " << taxa << endl;
    cout << "Valor total a ser sacado: " << valor + taxa << endl;
    float saldoAtual = getSaldo();
    if (saldoAtual >= valor + taxa) {
      saldo -= (valor + taxa);
    } else {
      cout << "Saldo insuficiente para saque com taxa." << endl;
    }
  }
};

class ContaEspecial : public ContaCorrente {
public:
  ContaEspecial(char *c, float saldo) : ContaCorrente(c, saldo) {}
  void sacar(float valor) override {
    float taxa = valor * 0.001;
    cout << "Saque com taxa de 0.1%." << endl;
    cout << "Taxa: " << taxa << endl;
    cout << "Valor total a ser sacado: " << valor + taxa << endl;
    float saldoAtual = getSaldo();
    if (saldoAtual >= valor + taxa) {
      saldo -= (valor + taxa);
    } else {
      cout << "Saldo insuficiente para saque com taxa." << endl;
    }
  }
};

int main() {
  ContaCorrente c1((char *)"123789456", 10000.0f);
  ContaEspecial c2((char *)"12345", 10000.0f);

  cout << "Saldo da conta corrente: " << c1.getSaldo() << endl;
  c1.sacar(1000.0f);
  cout << "Saldo da conta corrente: " << c1.getSaldo() << endl;

  cout << "Saldo da conta especial: " << c2.getSaldo() << endl;
  c2.sacar(1000.0f);
  cout << "Saldo da conta especial: " << c2.getSaldo() << endl;


  return 0;
}