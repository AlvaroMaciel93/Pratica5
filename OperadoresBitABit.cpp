#include <iostream>
 using namespace std;

int main() {
    unsigned char informacaoGenetica;
    cout << "Informe a informacao genetica da planta [1-255]: ";
    cin >> informacaoGenetica;


    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if (informacaoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }

   
    int geneEspecifico;
    cout << "Informe o número do gene que deseja verificar [1-8]: ";
    cin >> geneEspecifico;

    
    bool estaPresente = (informacaoGenetica & (1 << (geneEspecifico - 1))) != 0;

    
    cout << "Genes presentes na planta: " << genesPresentes << endl;
    if (estaPresente) {
        cout << "O gene " << geneEspecifico << " está presente nesta planta." << endl;
    } else {
        cout << "O gene " << geneEspecifico << " não está presente nesta planta." << endl;
    }

    return 0;
}