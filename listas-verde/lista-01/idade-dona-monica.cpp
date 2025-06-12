#include <iostream>

using namespace std;

int getMaisVelho(int mae, int fUm, int fDois) {
  int fTres = mae - fUm - fDois;

  if (fUm >= fDois && fUm >= fTres)
    return fUm;
  if (fDois > fUm && fDois > fTres)
    return fDois;
  return fTres;
}

int main() {
  int mae, fUm, fDois;
  cin >> mae;
  cin >> fUm;
  cin >> fDois;

  int maisVelho = getMaisVelho(mae, fUm, fDois);

  cout << maisVelho << endl;
  return 0;
}