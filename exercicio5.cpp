#include <iostream>

using namespace std;

int main() {
    // Leia a informação genética de uma planta na forma de um unsigned char
    unsigned char Gen;
    cout << "Digite a informacao genetica da planta (um valor entre 0 e 255): ";
    cin >> Gen;

    // Utilize operadores bit a bit para identificar quantos genes estão presentes
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if (Gen & (1 << i)) {
            genesPresentes++;
        }
    }

    // Exiba a quantidade de genes presentes
    cout << "Numero de genes presentes: " << genesPresentes << endl;

    // Solicite do usuário o gene específico que ele quer verificar
    int geneDesejado;
    cout << "Digite o numero do gene que voce deseja verificar (entre 1 e 8): " << endl;
    cin >> geneDesejado;

    // Verifique se o gene desejado está presente na planta
    if (geneDesejado >= 1 && geneDesejado <= 8) {
        bool presente = Gen & (1 << (geneDesejado - 1));
        if (presente) {
            cout << "O gene " << geneDesejado << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneDesejado << " nao esta presente nesta planta." << endl;
        }
    } else {
        cout << "Numero de gene invalido. Deve ser entre 1 e 8." << endl;
    }

    return 0;
}
