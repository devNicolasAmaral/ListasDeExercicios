#include <iostream>

int main(void) {
    float tempo;
    float velocidade;
    float km;
    float distancia;
    float combustivel;

    std::cout << "Informe quanto tempo durou a viagem: ";
    std::cin >> tempo;
    std::cout << "Informe a velocidade média utilizada: ";
    std::cin >> velocidade;
    std::cout << "Informe quantos quilômetros o automóvel fez com um litro de combustível: ";
    std::cin >> km;

    distancia = tempo * velocidade;
    combustivel = distancia/km;

    std::cout << "Velocidade média: " << velocidade << "Km/h.";
    std::cout << "\nTempo gasto na viagem: " << tempo << "h.";
    std::cout << "\nDistância percorrida: " << distancia << "Km.";
    std::cout << "\nQuantidade de conbustível utilizado: " << combustivel << "l.";

    return 0;
}
