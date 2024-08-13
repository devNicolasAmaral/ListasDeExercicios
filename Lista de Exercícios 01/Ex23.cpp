#include <iostream>

int main(void)
{
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
        std::cout << centena << "centena";

    }
    if (dezena == 1) {
        std::cout << dezena << "dezena";
    } 
    if (unidade) {
        std::cout << unidade << "unidade";
    }
   


    
    return 0;
}
