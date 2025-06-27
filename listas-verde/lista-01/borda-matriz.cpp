#include <iostream>
#include <vector>
using namespace std;

void preencheMatriz(vector<vector<int>> &matriz, int m, int n) {
  for (int i = 0; i < m; i++) {
    matriz[i].resize(n);
    for (int j = 0; j < n; j++) {
      cin >> matriz[i][j];
    }
  }
}

int somaBorda(vector<vector<int>> &matriz, int m, int n) {
  int soma = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
        soma += matriz[i][j];
      }
    }
  }
  return soma;
}

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> matriz(m);

  preencheMatriz(matriz, m, n);
  int res = somaBorda(matriz, m, n);

  cout << res << endl;
  return 0;
}