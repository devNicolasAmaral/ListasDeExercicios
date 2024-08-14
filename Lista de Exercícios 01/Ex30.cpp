#include <iostream>
#include <math.h>

int main(void) {
    int a;
    int b;
    int c;
    float delta;
    float r1;
    float r2;

    std::cout << "Informe o valor de a: ";
    std::cin >> a;
    std::cout << "Informe o valor de b: ";
    std::cin >> b;
    std::cout << "Informe o valor de c: ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "A equação não é de segunda grau, porque a = 0.";
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        std::cout << "A equação não possui raizes reais, porque delta é um valor negativo.";
        return 0;
    } else if (delta >= 0) {
        r1 = (b * (-1) + sqrt(delta)) / 2 * a;
        r2 = (b * (-1) - sqrt(delta)) / 2 * a;

        if (delta == 0 ) {
            std::cout << "Resposta 01: " << r1 << ".";    
        } else {
            std::cout << "Resposta 01: " << r1 << ".";
            std::cout << "\nResposta 02: " << r2 << ".";
        }
    }

    return 0;
}
