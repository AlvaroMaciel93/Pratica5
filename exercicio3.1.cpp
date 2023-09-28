#include <iostream>
#include <limits>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "O número fornecido é (" << numero << ") é " << (numero > numeric_limits<short>::max() ? "maior que um short int." : "este valor pertence ao intervalo dos short int.") << endl;

    return 0;
}
