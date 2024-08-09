#include <iostream>
#include <iomanip>

int main(void) {
    float fahrenheit;
    float kelvin;

    std::cout << "Informe um valor em Fahrenheit: ";
    std::cin >> fahrenheit;

    kelvin = (fahrenheit - 32) * 5/9 + 273.15;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit: " << fahrenheit << ".";
    std::cout << "\nKelvin: " << kelvin << ".";
    
    return 0;
}
