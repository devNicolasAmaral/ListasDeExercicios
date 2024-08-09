#include <iostream>
#include <math.h>
#include <iomanip>

int main(void) {
    int a;
    int b;
    float c;
    float resultado;
    
    std::cout << "Informe o primeiro número: ";
    std::cin >> a;
    std::cout << "Informe o segundo número: ";
    std::cin >> b;
    std::cout << "Informe o terceiro número: ";
    std::cin >> c;

    std::cout << std::fixed << std::setprecision(2);

    resultado = (a*2) + (b/2.0);

    std::cout << "Resultado 01: " << resultado << ".";

    resultado = (a * 3) + c;

    std::cout << "\nResultado 02: " << resultado << ".";

    resultado = pow(c, 3);

    std::cout << "\nResultado 03: " << resultado << ".";

    
    return 0;

}
