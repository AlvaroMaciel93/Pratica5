#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    double a,b,c;
    double delta;
    cout << "Digite os coeficientes da um polinomio de 2o grau" << endl;
    cin >> a >> b >> c;
    cout << "p(x) = " << a <<"x^2 + " << b << "x + " << c << endl;
    delta = pow(b,2)-4*a*c;
    if (delta>0){
        double x1, x2;
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << "Existem duas raizes reais:" << x1 << ", " << x2 << endl;
    }else if(delta==0){
        double x1;
        x1 = (-b)/(2*a);
        cout << "Existe uma raiz real: " << x1 << endl;
    } else{
        cout << "Nao existe raiz real" << endl;
    }
    double x;
    cout << "Digite um numero real" << endl;
    cin >> x;
    double px = a*pow(x,2) + b*x + c;
    cout << "p(" << x << ") = " << px << endl;
    return 0;
}

    