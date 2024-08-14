#include <iostream>

int main(void) {
    int n;
    int centena;
    int dezena;
    int unidade;


    while (n > 1000)
    {
        std::cout << "Informe um valor inteiro menor que 1000: ";
        std::cin >> n;
    }

    centena = n / 100;            
    dezena = (n / 10) % 10;        
    unidade = n % 10;    

    
    if (centena == 1) {
        if (dezena >= 1 && unidade >= 1) {
            std::cout << centena << " centena, ";    
        } else if (dezena == 0 && unidade == 0) {
            std::cout << centena << " centena.";     
        }else if (dezena == 0 || unidade == 0) {
            std::cout << centena << " centena e ";  
        }
    } else if (centena > 1 ) {
        if (dezena >= 1 && unidade >= 1) {
            std::cout << centena << " centenas, ";    
        } else if (dezena == 0 && unidade == 0) {
            std::cout << centena << " centenas.";     
        } else if (dezena == 0 || unidade == 0) {
            std::cout << centena << " centenas e ";  
        }
    }

    if (dezena == 1) {
        if (unidade >= 1) {
            std::cout << dezena << " dezena e ";    
        } else if (unidade == 0) {
            std::cout << dezena << " dezena.";  
        }
    } else if (dezena > 1 ) {
        if (unidade >= 1) {
            std::cout << dezena << " dezenas e ";    
        } else if (unidade == 0) {
            std::cout << dezena << " dezenas.";  
        }
    }

    if (unidade == 1) {
        std::cout << unidade << " unidade.";    
    } else if (unidade > 1) {
        std::cout << unidade << " unidades.";    
    }

    return 0;
}
