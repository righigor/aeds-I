#include <iostream>

using namespace std;

void verifica(int num) {
  if (num % 5 == 0 && num % 3 == 0) {
    cout << "Divisível por ambos" << endl;
  } else if (num % 3 == 0) {
    cout << "Divisível por 3" << endl;
  } else if (num % 5 == 0) {
    cout << "Divisível por 5" << endl;
  } else {
    cout << "Não é divisível por 3 ou 5" << endl;
  }
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  verifica(a);
  verifica(b);
  verifica(c);

  return 0;
}