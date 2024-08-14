#include <iostream>

int main(void) {
    float nota01;
    float nota02;
    float media;
    char conceito;

    std::cout << "Informe a primeira nota: ";
    std::cin >> nota01;
    std::cout << "Informe a segunda nota: ";
    std::cin >> nota02;

    media = (nota01 + nota02) / 2;

    std::cout << "Nota 1: " << nota01 << ".\n";
    std::cout << "Nota 2: " << nota02 << ".\n";
    std::cout << "Média: " << media << ".\n";

    if (media >= 9.0 && media <= 10.0) {
        conceito = 'A';
        std::cout << "Entre 9,0 e 10,0.\n" << conceito << ".";
    } else if (media >= 7.5 && media <= 9.0) {
        conceito = 'B';
        std::cout << "Entre 7,5 e 9,0.\n" << conceito << ".";
    } else if (media >= 6.0 && media <= 7.5) {
        conceito = 'C';
        std::cout << "Entre 6,0 e 7,5.\n" << conceito << ".";
        
    } else if (media >= 4.0 && media <= 6.0) {
        conceito = 'D';
        std::cout << "Entre 4,0 e 6,0.\n" << conceito << ".";
    } else if (media >= 0 && media <= 4.0) {
        conceito = 'E';
        std::cout << "Entre 0 e 4,0.\n" << conceito << ".";
    } else {
        std::cout << "Notas não informadas corretamente!";
    }

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        std::cout << "\nAPROVADO";
    } else if (conceito == 'D' || conceito == 'E') {
        std::cout << "\nREPROVADO";
    }

    return 0;
}