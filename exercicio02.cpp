#include <iostream>

int main() {
    char ch1, ch2, ch3;

    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    std::string type;
    if (isupper(ch1)) {
        type = "letra maiúscula";
    } else if (islower(ch1)) {
        type = "letra minúscula";
    } else if (isdigit(ch1)) {
        type = "dígito";
    } else {
        type = "outro tipo de caractere";
    }

    std::cout << "O caractere digitado é " << type << std::endl;

    return 0;
}
