#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Animal {
protected:
  string nome;
  string raca;
  int idade;
  double preco;

public:
  Animal(string nome, string raca, int idade, double preco)
      : nome(nome), raca(raca), idade(idade), preco(preco) {}

  virtual ~Animal() {}

  string getNome() const { return nome; }
  string getRaca() const { return raca; }
  int getIdade() const { return idade; }
  double getPreco() const { return preco; }

  void setNome(string n) { nome = n; }
  void setRaca(string r) { raca = r; }
  void setIdade(int i) { idade = i; }
  void setPreco(double p) { preco = p; }

  virtual void exibir() const = 0;
};

class Cachorro : public Animal {
public:
  Cachorro(string nome, string raca, int idade, double preco) : Animal(nome, raca, idade, preco) {}

  void exibir() const override {
    cout << "Cachorro: " << nome << ", Raça: " << raca << ", Idade: " << idade << ", Preço: R$"
         << preco << endl;
  }
};

class Gato : public Animal {
public:
  Gato(string nome, string raca, int idade, double preco) : Animal(nome, raca, idade, preco) {}

  void exibir() const override {
    cout << "Gato: " << nome << ", Raça: " << raca << ", Idade: " << idade << ", Preço: R$" << preco
         << endl;
  }
};

class PetShop {
private:
  vector<unique_ptr<Animal>> animais;

public:
  void adicionarAnimal(Animal *animal) { animais.emplace_back(animal); }

  void listarAnimais() const {
    if (animais.empty()) {
      cout << "Nenhum animal cadastrado.\n";
      return;
    }
    for (size_t i = 0; i < animais.size(); ++i) {
      cout << "[" << i << "] ";
      animais[i]->exibir();
    }
  }

  void atualizarAnimal(int index, string nome, string raca, int idade, double preco) {
    if (index < 0 || index >= animais.size()) {
      cout << "Índice inválido.\n";
      return;
    }
    animais[index]->setNome(nome);
    animais[index]->setRaca(raca);
    animais[index]->setIdade(idade);
    animais[index]->setPreco(preco);
    cout << "Animal atualizado com sucesso.\n";
  }

  void removerAnimal(int index) {
    if (index < 0 || index >= animais.size()) {
      cout << "Índice inválido.\n";
      return;
    }
    animais.erase(animais.begin() + index);
    cout << "Animal removido com sucesso.\n";
  }
};

void menu() {
  PetShop loja;
  int opcao;

  do {
    cout << "\n--- PetShop Manager ---\n";
    cout << "1. Adicionar Cachorro\n";
    cout << "2. Adicionar Gato\n";
    cout << "3. Listar Animais\n";
    cout << "4. Atualizar Animal\n";
    cout << "5. Remover Animal\n";
    cout << "0. Sair\n";
    cout << "Escolha: ";
    cin >> opcao;

    if (opcao == 1 || opcao == 2) {
      string nome, raca;
      int idade;
      double preco;
      cout << "Nome: ";
      cin >> nome;
      cout << "Raça: ";
      cin >> raca;
      cout << "Idade: ";
      cin >> idade;
      cout << "Preço: ";
      cin >> preco;

      if (opcao == 1)
        loja.adicionarAnimal(new Cachorro(nome, raca, idade, preco));
      else
        loja.adicionarAnimal(new Gato(nome, raca, idade, preco));
    } else if (opcao == 3) {
      loja.listarAnimais();
    } else if (opcao == 4) {
      int idx;
      string nome, raca;
      int idade;
      double preco;
      loja.listarAnimais();
      cout << "Índice do animal a atualizar: ";
      cin >> idx;
      cout << "Novo nome: ";
      cin >> nome;
      cout << "Nova raça: ";
      cin >> raca;
      cout << "Nova idade: ";
      cin >> idade;
      cout << "Novo preço: ";
      cin >> preco;
      loja.atualizarAnimal(idx, nome, raca, idade, preco);
    } else if (opcao == 5) {
      int idx;
      loja.listarAnimais();
      cout << "Índice do animal a remover: ";
      cin >> idx;
      loja.removerAnimal(idx);
    }

  } while (opcao != 0);
}

int main() {
  menu();
  return 0;
}
