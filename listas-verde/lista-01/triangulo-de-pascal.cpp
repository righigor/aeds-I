#include <iostream>
#include <vector>

using namespace std;

void printaMatriz(const vector<vector<int>> &matriz, int m) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}

void criaTriangulo(vector<vector<int>> &matriz, int m) {
  for (int i = 0; i < m; i++) {
    matriz[i][0] = 1;
    for (int j = 1; j < i + 1; j++) {
      if (j == i) {
        matriz[i][j] = 1;
      } else {
        matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j - 1];
      }
    }
  }
}

int main() {
  int m;
  cin >> m;
  vector<vector<int>> matriz(m);
  for (int i = 0; i < m; i++) {
    matriz[i].resize(m);
  }
  criaTriangulo(matriz, m);
  printaMatriz(matriz, m);

  return 0;
}