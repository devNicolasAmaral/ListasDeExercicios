#include <iostream>
#include <iomanip>

int main(void) {
    float salario;
    float percentual;

    std::cout << "Informe seu salário: R$";
    std::cin >> salario;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Salário antes do reajuste: R$" << salario << ".";

    if (salario <= 2000) {
        percentual = 1.20;
        salario *= percentual;
    } else if (salario > 2000 && salario <= 4000) {
        percentual = 1.15;
        salario *= percentual;
    } else if (salario > 4000 && salario <= 8000) {
        percentual = 1.10;
        salario *= percentual;
    } else if (salario > 8000) {
        percentual = 1.05;
        salario *= percentual;
    }

    std::cout << "\nPercentual de ajuste de " << (percentual * 100) - 100 << "%.";
    std::cout << "\nValor do aumento: R$" << (salario / percentual) * (percentual - 1)  << ".";
    std::cout << "\nNovo salário: R$ " << salario << ".";

    return 0;
}