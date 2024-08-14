#include <iostream>

int main(void) {
    float lado1;
    float lado2;
    float lado3;

    std::cout << "Informe o primeiro lado do triângulo: ";
    std::cin >> lado1;
    std::cout << "Informe o segundo lado do triângulo: ";
    std::cin >> lado2;
    std::cout << "Informe o terceiro lado do triângulo: ";
    std::cin >> lado3;

    if (lado1 == lado2 && lado1 == lado3) {
        std::cout << "Triângulo equilátero.";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        std::cout << "Triângulo isósceles.";
    } else if (lado1 != lado2 && lado1 != lado3) {
        std::cout << "Triângulo escaleno.";
    }

    return 0;
}
