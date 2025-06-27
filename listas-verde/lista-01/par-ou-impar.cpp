#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 == 0) cout << "par";
    if (num % 2 != 0) cout << "impar";

    return 0;
}