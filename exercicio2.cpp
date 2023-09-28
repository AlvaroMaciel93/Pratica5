#include <iostream>

using namespace std;

int main(void){
    //exercício a:
    char ch1, ch2, ch3;
    int convert;

    //exercício b:
    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    //cout << "O caractere: " << ch1 << " - " << (int)ch1 << endl;
    
    //exercício c:
    cout << (isupper(ch1) ? "Eh maiusculo!\n": (islower(ch1) ? "Eh minusculo!\n" : (isdigit(ch1) ? "Eh um digito!\n" : "Outro tipo de caractere\n")));
    
    //exercício e:
    ch2 = 81;
    convert = static_cast<int>(ch2);
    cout << "\nCarac - Dec - Oct - Hex\n";    
    cout << ch2 << " - " << dec << convert << " - " << oct << convert << " - " << hex << convert;
    
    //exercicio f:
    ch3 = 'q';
    convert = static_cast<int>(ch3);
    cout << "\n\nCarac - Dec - Oct - Hex\n";    
    cout << ch3 << " - " << dec << convert << " - " << oct << convert << " - " << hex << convert;
    return 0;
}