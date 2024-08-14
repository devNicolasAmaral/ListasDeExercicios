#include <iostream>

int main(void) {
    int n;

    std::cout << "Informe um número: ";
    std::cin >> n;

    switch (n) {
    case 1: std::cout << "Domingo.";            break;
    case 2: std::cout << "Segunda.";            break;
    case 3: std::cout << "Terça.";              break;
    case 4: std::cout << "Quarta.";             break;
    case 5: std::cout << "Quinta.";             break;
    case 6: std::cout << "Sexta.";              break;
    case 7: std::cout << "Sábado.";             break;
    default: std::cout << "Valor Inválido!";    break;
    }
    return 0;
}
