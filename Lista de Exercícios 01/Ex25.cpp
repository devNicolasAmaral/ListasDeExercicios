#include <iostream>

int main(void)
{
    char pergunta1;
    char pergunta2;
    char pergunta3;
    char pergunta4;
    char pergunta5;
    int contador = 0;

    std::cout << "1. Telefonou para a vítima? (responda com \"S\" ou \"N\") ";
    std::cin >> pergunta1;
    std::cout << "2. Esteve no local do crime? (responda com \"S\" ou \"N\") ";
    std::cin >> pergunta2;
    std::cout << "3. Mora perto da vítima? (responda com \"S\" ou \"N\") ";
    std::cin >> pergunta3;
    std::cout << "4. Devia para a vítima? (responda com \"S\" ou \"N\") ";
    std::cin >> pergunta4;
    std::cout << "5. Já trabalhou com a vítima? (responda com \"S\" ou \"N\") ";
    std::cin >> pergunta5;

    if (pergunta1 == 'S') {
        contador++;
    }
    if (pergunta2 == 'S') {
        contador++;
    }
    if (pergunta3 == 'S') {
        contador++;
    }
    if (pergunta4 == 'S') {
        contador++;
    }
    if (pergunta5 == 'S') {
        contador++;
    }

    if (contador == 2) {
        std::cout << "Suspeito.";
    } else if (contador == 3 || contador == 4) {
        std::cout << "Cúmplice.";
    } else if (contador == 5) {
        std::cout << "Assassino.";       
    } else {
        std::cout << "Inocente.";
    }
    
    return 0;
}
