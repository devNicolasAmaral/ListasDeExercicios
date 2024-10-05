#include <iostream>
#include <string>
int main(void) {
    float a;
    float b;
    float r;
    float resto;
    std::string operacao;

    std::cout << "Informe o primeiro número: ";
    std::cin >> a;
    std::cout << "Informe o segundo número: ";
    std::cin >> b;
    std::cout << "Qual operação deseja realizar (zoma, subtracao, divisao, multiplicacao): ";
    std::cin >> operacao;

    if (operacao == "soma") {
        r = a + b;
        resto = r % 2;

        if (resto == 0) {

        }
    } else if (operacao == "subtracao") {

    }
    
    return 0;
}
