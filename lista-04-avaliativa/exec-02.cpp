#include <cstring>
#include <iostream>

using namespace std;

class Produto {
private:
  char loja[100];
  char telefone[100];
  float preco;

public:
  Produto() {
    loja[0] = '\0';
    telefone[0] = '\0';
    preco = 0.0f;
  }

  Produto(char *l, char *t, float p) {
    strcpy(loja, l);
    strcpy(telefone, t);
    preco = p;
  }

  void getProduto() {
    cout << "Loja: " << loja << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Preco: " << preco << endl;
  }
};

int main() {
  Produto produtos[10];
  char loja[100], telefone[100];
  float preco;
  int i = 0;
  while (i < 10) {
    cout << "Digite o nome da loja: ";
    cin.getline(loja, sizeof(loja));
    if (strcmp(loja, "sair") == 0) {
      break;
    }
    cout << "Digite o telefone da loja: ";
    cin.getline(telefone, sizeof(telefone));
    cout << "Digite o preco do produto: ";
    cin >> preco;
    cin.ignore();
    produtos[i] = Produto(loja, telefone, preco);
    i++;
  }
  cout << "Produtos cadastrados: " << i << endl;
  for (int j = 0; j < i; j++) {
    cout << "Produto " << j + 1 << ":" << endl;
    produtos[j].getProduto();
    cout << endl;
  }
}