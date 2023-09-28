#include <iostream>
#include <iomanip> // Para manipulação de saída

using namespace std;

int main(void) {
    int a, b, c;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: " << hex << c << endl;

    c = a * b;
    cout << "Produto de a e b em formato octal: " << oct << c << endl;

    if (a >= b) {
        c = a - b;
    } else {
        c = b - a;
    }
    cout << "Módulo da diferença entre a e b: " << c << endl;

    if (b != 0) {
        c = a / b;
        cout << "Quociente de a por b: " << c << endl;

        if (a % b == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "A divisão por zero não é possível." << endl;
    }

    return 0;
}