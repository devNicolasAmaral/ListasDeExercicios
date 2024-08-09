#include <iostream>
;

int main() {
    char letra;

    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    letra = std::tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "A letra " << letra << " é uma vogal.";
    } else if ((letra >= 'a' && letra <= 'z')) {
        std::cout << "A letra " << letra << " é uma consoante.";
    } else { 
       std::cout << "O caractere digitado não é uma letra.";
    }

    return 0;
}