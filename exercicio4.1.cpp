#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x, delta, px;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    // Calcular delta para determinar o número de raízes
    delta = (b * b) - 4 * a * c;
    double raiz, raiz1, raiz2;
    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais distintas: x1 = " << raiz1 << " e x2 = " << raiz2 << endl;
    } else if (delta == 0) {
        raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real única: x = " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    cout << "Digite um valor para x: ";
    cin >> x;

    px = a * x * x + b * x + c;
    cout << "O valor de p(x) para x = " << x << " é: " << px << endl;

    return 0;
}
