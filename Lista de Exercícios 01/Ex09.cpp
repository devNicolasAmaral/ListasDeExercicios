#include <iostream>
#include <math.h>
#include <iomanip>

int main(void) {
    const float pi = 3.141516;
    float raio;
    float densidade;
    float peso;

    std::cout << "Informe o raio: ";
    std::cin >> raio;
    std::cout << "Informe a densidade: ";
    std::cin >> densidade;

    peso = densidade * 4 * pi * pow(raio, 2) * raio/3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Peso: " << peso << ".";

    return 0;
}
