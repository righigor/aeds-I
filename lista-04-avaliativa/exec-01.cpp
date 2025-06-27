#include <cstring>
#include <iostream>

using namespace std;

class Cliente {
private:
  char nome[100];
  char data[100];
  char endereco[100];
  char telefone[15];

public:
  Cliente(const char *nome, const char *data, const char *endereco, const char *telefone);
  void getCliente();
};

Cliente::Cliente(const char *nome, const char *data, const char *endereco, const char *telefone) {
  strncpy(this->nome, nome, sizeof(this->nome) - 1);
  this->nome[sizeof(this->nome) - 1] = '\0';
  strncpy(this->data, data, sizeof(this->data) - 1);
  this->data[sizeof(this->data) - 1] = '\0';
  strncpy(this->endereco, endereco, sizeof(this->endereco) - 1);
  this->endereco[sizeof(this->endereco) - 1] = '\0';
  strncpy(this->telefone, telefone, sizeof(this->telefone) - 1);
  this->telefone[sizeof(this->telefone) - 1] = '\0';
}

void Cliente::getCliente() {
  cout << "Nome: " << nome << endl;
  cout << "Data: " << data << endl;
  cout << "Endereço: " << endereco << endl;
  cout << "Telefone: " << telefone << endl;
}

int main() {
  char nome[100], data[100], endereco[100], telefone[15];

  cout << "Digite o nome do cliente: ";
  cin.getline(nome, sizeof(nome));
  cout << "Digite a data de nascimento do cliente: ";
  cin.getline(data, sizeof(data));
  cout << "Digite o endereço do cliente: ";
  cin.getline(endereco, sizeof(endereco));
  cout << "Digite o telefone do cliente: ";
  cin.getline(telefone, sizeof(telefone));

  Cliente cliente(nome, data, endereco, telefone);
  cliente.getCliente();

  return 0;
}