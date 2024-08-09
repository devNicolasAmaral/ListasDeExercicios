#include <iostream>
#include <iomanip>

int main(void) {
    float altura;
    char sexo;
    float pesoIdeal;

    std::cout << "Informe sua altura (em metros): ";
    std::cin >> altura;
    std::cout << "Informe seu sexo (M ou F): ";
    std::cin >> sexo;

    std::cout << std::fixed << std::setprecision(2);

    if (sexo == 'M') {
        pesoIdeal = ((72.7 * altura) - 58);
        std::cout << "Peso ideal: " << pesoIdeal << "Kg.";
    } else if (sexo == 'F') {
        pesoIdeal = ((62.1 * altura) - 44.7);
        std::cout << "Peso ideal: " << pesoIdeal << "Kg.";
    }

    return 0;
}
