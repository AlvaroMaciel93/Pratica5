#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void){

    double x,y,z;
    double fx;
    
    cout << "Digite dois numeros reais:" << endl;
    cin >> x >> y;
    fx = 5*x+2;
    cout << " O ponto (" << x << ", " << y << ") esta ";
    cout << (y>fx ? "Acima" :"Abaixo");
    cout << "da curva f(x) = 5x + 2" << endl;
    z = sqrt( pow(x,2) + pow(y,2) );
    cout << "A distancia euquidiada entre os pontos eh: " << z << endl;
    z = x*y;
    cout << scientific;
    cout << "O produto entre x e y eh: " << z << endl;  
    return 0;
}