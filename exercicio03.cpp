#include <iostream>
#include <iomanip>

int main() {
    int a, b, c;

    std::cout << "Digite dois números inteiros: ";
    std::cin >> a >> b;

    c = a + b;

    std::cout << "Resultado em formato hexadecimal: " << std::hex << c << std::endl;

    return 0;
}