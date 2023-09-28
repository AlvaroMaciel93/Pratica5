#include <iostream>
#include <iomanip>

int main()
{
    int a, b, c;

    std::cout << "Digite dois números inteiros: ";
    std::cin >> a >> b;

    c = a + b;

    std::cout << "Resultado em formato hexadecimal: " << std::hex << c << std::endl;
    std::cout << "Resultado em formato octal: " << std::oct << c << std::endl;

    c = std::abs(a - b); // atribuir o módulo da diferença entre a e b à variável c

    std::cout << "Resultado: " << c << std::endl; // imprimir o resultado

    return 0;
}