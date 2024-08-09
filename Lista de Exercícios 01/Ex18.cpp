#include <iostream>

int main(void) {
    
    float a;

    std::cout << "Informe um número: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << a << " é positivo.";
    } else if (a < 0) {
        std::cout << a << " é negativo.";
    } else if (a == 0) {
        std::cout << a << " é neutro.";
    }

    return 0;
}
