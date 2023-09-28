#include <iostream>
using namespace std;


int main(void) {
    char ch1, ch2, ch3;
    
    
    cout << "Digite um caractere: ";
    cin >> ch1;

    string tipoCaractere;
    if (isupper(ch1)) {
        tipoCaractere = "letra maiúscula";
    } else if (islower(ch1)) {
        tipoCaractere = "letra minúscula";
    } else if (isdigit(ch1)) {
        tipoCaractere = "dígito";
    } else {
        tipoCaractere = "outro tipo de caractere";
    }


    cout << "Você digitou uma " << tipoCaractere << endl;

    ch2 = 81;


    cout << "Valor de ch2 em formato decimal: " << int(ch2) << endl;
    cout << "Valor de ch2 em formato octal: " << oct << int(ch2) << endl;
    cout << "Valor de ch2 em formato hexadecimal: " << hex << int(ch2) << endl;
    cout << "Valor de ch2 como caractere: " << ch2 << endl;

    ch3 = tolower(ch2);

    cout << "Valor de ch3 em formato decimal: " <<int(ch3) << endl;
    cout << "Valor de ch3 em formato octal: " << oct <<int(ch3) << endl;
    cout << "Valor de ch3 em formato hexadecimal: " << hex <<int(ch3) << endl;
    cout << "Valor de ch3 como caractere: " << ch3 << endl;

    return 0;
}