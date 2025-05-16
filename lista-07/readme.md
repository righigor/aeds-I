# 📘 Lista de Exercícios 07

Este diretório contém as resoluções da **Lista de Exercícios 07** da disciplina **Algoritmos e Estrutura de Dados I** (PUC Minas). Os exercícios foram implementados em linguagem **C**, com foco no desenvolvimento de lógica, uso de ponteiros, estruturas, e manipulação de dados.

## 🗂️ Estrutura da pasta

- `lista-07.pdf` – Arquivo original da lista de exercícios fornecida pelo professor  
- `jogo.c` – Módulo que contém as funções e procedimentos relacionados à lógica de batalha  
- `jogo.h` – Header file com as definições e protótipos utilizados em `jogo.c`
- `testajogo.c` – Programa principal que utiliza o módulo jogo para simular uma batalha completa entre dois guerreiros
- `README.md` – Este arquivo com informações sobre a lista

## 📌 Tópicos abordados nesta lista

- ✅ Structs: Criação e uso de um novo tipo de dado composto (struct Guerreiro).
- ✅ Structs: Agrupamento de múltiplos atributos relacionados (ataque, defesa, carisma, pontos de vida, id).
- ✅ Simulação com aleatoriedade: Implementação de rolagem de dados com valores aleatórios simulando dados de 6 faces.
- ✅ Utilização da função rand() para gerar eventos estocásticos (aleatórios).
- ✅ Uso de ponteiros em funções que modificam registros (ex: criaGuerreiro, ataca).
- ✅ Modularização: Separação do código em módulos (jogo.c e jogo.h).
- ✅ Organização e encapsulamento das funcionalidades do sistema de batalha.

## 🧪 Como compilar e executar

Execute os arquivos individualmente usando o compilador `gcc`:

```bash
gcc testajogo.c jogo.c -o batalha -lm
./batalha
```

## 👨‍💻 Autor

**Igor Righi Gonçalves**  
Aluno de Engenharia de Software – PUC Minas  

[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/righigor) [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/igor-righi/) [![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:righigordev@gmail.com)

---

## 📎 Observações

- Todos os exercícios foram testados em ambiente Linux (Ubuntu), utilizando o compilador `gcc`.
- Sinta-se à vontade para explorar os códigos, deixar sugestões ou abrir *issues* se encontrar algo que possa ser melhorado.
