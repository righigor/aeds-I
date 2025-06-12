#include <iomanip>
#include <iostream>

using namespace std;

float getValorTotal(int numero) {
  if (numero == 0)
    return 0;

  if (numero <= 100)
    return numero * 0.25;

  return numero * 0.20;
}

int main() {
  int totalFolhas;
  cin >> totalFolhas;

  float valor = getValorTotal(totalFolhas);

  cout << fixed << setprecision(2) << valor << endl;
  return 0;
}