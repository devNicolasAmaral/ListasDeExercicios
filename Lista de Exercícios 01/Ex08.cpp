#include <iostream>
#include <iomanip>
#include <math.h>

int main(void) {
    const float pi = 3.141516;
    float raio;
    float altura;
    float volume;

    std::cout << "Informe o raio: ";
    std::cin >> raio;
    std::cout << "Informe a altura: ";
    std::cin >> altura;

    volume = altura * pi * pow(raio, 2);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Volume: " << volume << ".";



    return 0;
}
