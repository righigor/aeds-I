#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore(); // limpa o '\n' pendente

  string maior_tamanho = "";
  string maior_lex = "";

  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);

    if (s.length() > maior_tamanho.length()) {
      maior_tamanho = s;
    }

    if (s > maior_lex) {
      maior_lex = s;
    }
  }

  cout << maior_tamanho << endl;
  cout << maior_lex << endl;

  return 0;
}
