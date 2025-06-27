#include <iostream>

using namespace std;

int getSoma(int n1, int n2, int n3, int n4, int n5) {
    return n1 + n2 + n3 + n4 + n5;
}

float getMedia(int n1, int n2, int n3, int n4, int n5) {
    return (n1 + n2 + n3 + n4 + n5)/5;
}

int main() {
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int soma = getSoma(n1, n2, n3, n4, n5);
    float media = getMedia(n1, n2, n3, n4, n5);

    cout << soma << endl;
    cout << media << endl;
    return 0;
}
