#include <iostream>
#include <iomanip>

int main(void) {
    float valorHora;
    float horasTrabalhadasMes;
    float ir;
    float inss;
    float sindicato;
    float salarioBruto;
    float salarioLiquido;

    std::cout << "Informe o quanto você ganha por hora: ";
    std::cin >> valorHora;
    std::cout << "Informe quantas horas você trabalha por mês: ";
    std::cin >> horasTrabalhadasMes;

    salarioBruto = valorHora * horasTrabalhadasMes;
    ir = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;

    salarioLiquido = salarioBruto - ir - inss - sindicato;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nSalário Bruto: R$" << salarioBruto << ".";
    std::cout << "\nIR (11%): R$" <<  ir << ".";
    std::cout << "\nINSS (8%): R$" << inss << ".";
    std::cout << "\nSindicato (5%): R$" << sindicato << ".";
    std::cout << "\nSalário Liquido: R$" << salarioLiquido << ".";

    

    return 0;
}
