#include <iostream>

int main(void) {
    int a;
    int b;
    int x;

    std::cout << "Informe o valor de a: ";
    std::cin >> a;
    std::cout << "Informe o valor de b: ";
    std::cin >> b;

    std::cout << "\nValor de a antes da troca: " << a << ".";
    std::cout << "\nValor de b antes da troca: " << b << ".";

    x = a;
    a = b;
    b = x;

    std::cout << "\n\nValor de a depois da troca: " << a << ".";
    std::cout << "\nValor de b depois da troca: " << b << ".";

    return 0;
}
