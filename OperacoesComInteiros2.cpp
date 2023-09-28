#include <iostream>
using namespace std;

int main(void) {
    long int num;

    cout << "Digite um número inteiro: ";
    cin >> num;
    
    cout << "O número " << " é ";
    cout << (num > __SHRT_MAX__ ? "maior que um short int" :(num<-__SHRT_MAX__ ? "menor que um sort int" :"pertence ao intervalo dos short int")) << endl;

    return 0;
}