#include <iostream>
#include <iomanip>

int main(void) {
    float nota01;
    float nota02;
    float nota03;
    float nota04;
    float mediaFinal;
    
    std::cout << "Informe suas 4 notas bimestrais.\n";
    std::cout << "Nota 01: ";
    std::cin >> nota01;
    std::cout << "Nota 02: ";
    std::cin >> nota02;
    std::cout << "Nota 03: ";
    std::cin >> nota03;
    std::cout << "Nota 04: ";
    std::cin >> nota04;

    std::cout << std::fixed << std::setprecision(2);
    mediaFinal = (nota01 + nota02 + nota03 + nota04)/4 ;

    std::cout << "Sua média final é de " << mediaFinal << ".";
    return 0;
}
