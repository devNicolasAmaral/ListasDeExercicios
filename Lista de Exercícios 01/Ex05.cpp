#include <iostream>
#include <iomanip>

int main(void) {
    float celcius;
    float fahrenheit;
    float kelvin;

    std::cout << "Informe uma temperatura em graus Celcius: ";
    std::cin >> celcius;

    fahrenheit = (9 * celcius + 160)/5;
    kelvin = celcius + 273.15;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Celcius: " << celcius;
    std::cout << "\nFahrenheit: " << fahrenheit;
    std::cout << "\nKelvin: " << kelvin;

    return 0;
}
