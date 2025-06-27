#include <iostream>
#include <map>
#include <string>

bool ehAnagramaCuringa(const std::string &p, const std::string &a) {
  std::map<char, int> freqP;
  std::map<char, int> freqA;
  int curingas = 0;

  for (size_t i = 0; i < p.size(); ++i) {
    freqP[p[i]]++;
    if (a[i] == '*') {
      curingas++;
    } else {
      freqA[a[i]]++;
    }
  }

  for (std::map<char, int>::iterator it = freqA.begin(); it != freqA.end(); ++it) {
    char letra = it->first;
    int qtd = it->second;
    if (freqP[letra] < qtd) {
      return false;
    }
  }

  int faltando = 0;
  for (std::map<char, int>::iterator it = freqP.begin(); it != freqP.end(); ++it) {
    char letra = it->first;
    int qtd = it->second;
    int usado = freqA[letra];
    if (usado < qtd) {
      faltando += qtd - usado;
    }
  }

  return curingas >= faltando;
}

int main() {
  std::string p, a;
  std::getline(std::cin, p);
  std::getline(std::cin, a);

  if (ehAnagramaCuringa(p, a)) {
    std::cout << "S" << std::endl;
  } else {
    std::cout << "N" << std::endl;
  }

  return 0;
}
