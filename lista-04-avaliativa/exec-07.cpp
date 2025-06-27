#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class AcessoNegadoException : public exception {
public:
  const char *what() const noexcept override { return "Acesso não autorizado!"; }
};

class DadosInvalidosException : public exception {
public:
  const char *what() const noexcept override { return "Usuário ou senha não informados!"; }
};

class SistemaLogin {
private:
  string usuario;
  string senha;

public:
  SistemaLogin() : usuario(""), senha("") {}

  SistemaLogin(const string &usuario, const string &senha) : usuario(usuario), senha(senha) {}

  bool logar() { return logar(this->usuario, this->senha); }

  bool logar(const string &usuario, const string &senha) {
    if (usuario.empty() || senha.empty()) {
      throw DadosInvalidosException();
    }
    if (usuario != "aluno" || senha != "1234") {
      throw AcessoNegadoException();
    }
    return true;
  }

  void setUsuario(const string &usuario) { this->usuario = usuario; }

  void setSenha(const string &senha) { this->senha = senha; }
};

int main() {
  SistemaLogin login;
  string usuario, senha;

  cout << "Usuário: ";
  getline(cin, usuario);
  cout << "Senha: ";
  getline(cin, senha);

  try {
    if (login.logar(usuario, senha)) {
      cout << "Login realizado com sucesso!" << endl;
    }
  } catch (const DadosInvalidosException &e) {
    cout << e.what() << endl;
  } catch (const AcessoNegadoException &e) {
    cout << e.what() << endl;
  } catch (...) {
    cout << "Erro desconhecido!" << endl;
  }

  return 0;
}