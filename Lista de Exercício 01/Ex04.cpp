#include <iostream>
#include <string>
#include <iomanip>

int main(void) {
    float salarioHora;
    std::string mes;
    float horasTrabalhadasMes;
    float salarioFinal;

    std::cout << "Informe o quanto ganha por hora: ";
    std::cin >> salarioHora;
    std::cout << "Informe o mês trabalhado: ";
    std::cin >> mes;
    std::cout << "Informe quantas horas trabalhou esse mês: ";
    std::cin >> horasTrabalhadasMes;

    salarioFinal = salarioHora * horasTrabalhadasMes;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Você deve receber no mês de " << mes << " o valor de R$" << salarioFinal << ".";
}
