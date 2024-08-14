#include <iostream>
#include <string>

int main(void) {
    std::string nome1;
    std::string nome2;
    std::string nome3;
    float preco1;
    float preco2;
    float preco3;

    std::cout << "Informe o nome do produto 1: ";
    std::cin >> nome1;
    std::cout << "Informe o preço do produto 1: ";
    std::cin >> preco1;
    std::cout << "Informe o nome do produto 2: ";
    std::cin >> nome2;
    std::cout << "Informe o preço do produto 2: ";
    std::cin >> preco2;
    std::cout << "Informe o nome do produto 3: ";
    std::cin >> nome3;
    std::cout << "Informe o preço do produto 3: ";
    std::cin >> preco3;

    if (preco1 < preco2 && preco1 < preco3) {
        std::cout << "Produto: " << nome1 << ".";
        std::cout << "\nPreço: R$" << preco1 << ".";
    } else if (preco2 < preco1 && preco2 < preco3) {
        std::cout << "Produto: " << nome2 << ".";
        std::cout << "\nPreço: R$" << preco2 << ".";
    } else if (preco3 < preco1 && preco3 < preco2) {
        std::cout << "Produto: " << nome3 << ".";
        std::cout << "\nPreço: R$" << preco3 << ".";
    }

    return 0;
}
