#include <iostream>

int main(void) {
    float a;
    float b;

    std::cout << "Informe o primeiro número: ";
    std::cin >> a;
    std::cout << "Informe osegundo número: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "Maior número: " << a << ".";
    } else if (a < b) {
        std::cout << "Maior número " << b << ".";
    } else if (a == b) {
        std::cout << "Números iguas. a = " << a << " e b = " << b << ".";
    }

    return 0;
}
