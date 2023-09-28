#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "Digite outro número inteiro: ";
    cin >> b;

    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: 0x" << hex << c << endl;

    c = a * b;
    cout << "Produto de a e b em formato octal: 0" << oct << c << endl;

    // Módulo da diferença
    c = abs(a - b);
    cout << "Módulo da diferença entre a e b: " << c << endl;

    // Divisão de a por b
    c = (b != 0) ? (a / b) : (cout << "A divisão por zero não é possível." << endl, 0);

    cout << "Quociente de a por b: " << c << endl;

    // Verificar se a é divisível de forma exata por b
    (a % b == 0) ? (cout << "a é divisível de forma exata por b." << endl) : (cout << "a não é divisível de forma exata por b." << endl);

    return 0;
}
