#include <iostream>

int main(void) {
    int n;
    int modulo;
    std::cout << "Informe um número: ";
    std::cin >> n;

    modulo = n % 2;

    if (modulo == 0) {
        std::cout << "Número " << n << " é par.";
    } else {
        std::cout << "Número " << n << " é impar.";
    }
    
    return 0;
}
