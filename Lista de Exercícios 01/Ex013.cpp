#include <iostream>
#include <iomanip>
#include <math.h>

int main(void) {
    float area;
    float lata;
    float preco;



    std::cout << "Informe, em metros², o tamanho da área a ser pintada: ";
    std::cin >> area;

    lata = area / 54; 
    preco = lata * 80;

    std::cout << "\nQuantidade de latas de tintas que devem ser compradas: " << ceil(lata) << ".";    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nValor a se pagar: R$" << preco << ".";

    return 0;
}
