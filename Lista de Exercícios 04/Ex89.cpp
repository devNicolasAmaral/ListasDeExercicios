#include <iostream>
using namespace std;

int soma(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;
    cout << "Digite três números inteiros: ";
    cin >> num1 >> num2 >> num3;
    
    int resultado = soma(num1, num2, num3);
    cout << "A soma dos números é: " << resultado << endl;

    return 0;
}
