#include <iostream>
#include <iomanip>

int main(void) {
    float peso;
    float excesso;
    float multa;

    std::cout << "Informe o peso do peixe: ";
    std::cin >> peso;

    if (peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;
        
        std::cout << "Excesso de peixe: " << excesso << "Kg."; 
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nValor da multa: R$" << multa << ".";
    } else {
        std::cout << "Não há excesso de peixe.";
    }

    return 0;
}
