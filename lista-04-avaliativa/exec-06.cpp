#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

class Lotofacil {
private:
  std::vector<int> numeros;

public:
  void escolherNumero(int numero) {
    if (numero < 1 || numero > 25) {
      throw std::out_of_range("Número fora do intervalo permitido (1-25).");
    }
    if (std::find(numeros.begin(), numeros.end(), numero) != numeros.end()) {
      throw std::invalid_argument("Número já escolhido.");
    }
    if (numeros.size() >= 15) {
      throw std::overflow_error("Já foram escolhidos 15 números.");
    }
    numeros.push_back(numero);
  }

  void mostrarNumeros() const {
    std::cout << "Números escolhidos: ";
    for (int n : numeros) {
      std::cout << n << " ";
    }
    std::cout << std::endl;
  }

  size_t quantidadeNumeros() const { return numeros.size(); }
};

int main() {
  Lotofacil jogo;
  int numero;
  while (true) {
    try {
      if (std::cin.eof())
        break;
      std::cout << "Escolha um número (1-25): ";
      std::cin >> numero;
      jogo.escolherNumero(numero);
      if (std::cin.eof())
        break;
      if (std::cin.fail()) {
        std::cin.clear();
        if (jogo.quantidadeNumeros() == 15) {
          std::cout << "Todos os 15 números foram escolhidos." << std::endl;
          break;
        }
      }
    } catch (const std::exception &e) {
      std::cout << "Erro: " << e.what() << std::endl;
    }
  }
  jogo.mostrarNumeros();
  return 0;
}