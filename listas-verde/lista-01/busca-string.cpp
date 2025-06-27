#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

bool contemPalavra(const string& linha, const string& palavraAlvo) {
    istringstream iss(linha);
    string palavra;
    while (iss >> palavra) {
        palavra.erase(remove_if(palavra.begin(), palavra.end(), ::ispunct), palavra.end());
        if (toLowerCase(palavra) == palavraAlvo) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    string alvo;
    
    cin >> N;
    cin.ignore();
    
    getline(cin, alvo);
    alvo = toLowerCase(alvo);
    
    int contagem = 0;
    for (int i = 0; i < N; i++) {
        string linha;
        getline(cin, linha);
        if (contemPalavra(linha, alvo)) {
            contagem++;
        }
    }
    
    cout << contagem << endl;
    return 0;
}
