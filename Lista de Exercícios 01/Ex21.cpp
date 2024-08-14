#include <iostream>

int main(void) {
    char turno;

    std::cout << "Informe o turno que estuda (M para matutino, V para vespertino ou N para noturno): ";
    std::cin >> turno;

    switch (turno) {
    case 'M': std::cout << "Bom dia!"; break;
    case 'V': std::cout << "Boa tarde!"; break;
    case 'N': std::cout << "Boa noite!"; break;
    default : std::cout << "Valor inválido!";
    }

    return 0;
}
