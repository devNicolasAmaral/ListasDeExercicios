#include <iostream>

int main(void) {
    int a;
    int b;
    int c;
    int x;

    std::cout << "Informe o primeiro número: ";
    std::cin >> a;
    std::cout << "Informe o segundo número: ";
    std::cin >> b;
    std::cout << "Informe o terceiro número: ";
    std::cin >> c;

    if (c > b) {
        x = b;
        b = c;
        c = x;
    }

    if (b > a) {
        x = a;
        a = b;
        b = x;
    }

    if (c > b) {
        x = b;
        b = c;
        c = x;
    }

    

    std::cout << "Ordem decrescente dos números: " << a << ", " << b << ", " << c << ".";




    return 0;
}
