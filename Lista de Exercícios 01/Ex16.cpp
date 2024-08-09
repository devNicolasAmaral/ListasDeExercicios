#include <iostream>
#include <string>
#include <math.h>

int main(void) {
    float mb;
    float mbps;
    float tempo;
    std::string hms;

    std::cout << "Informe o tamanho do arquivo (em MB): ";
    std::cin >> mb;
    std::cout << "Informe a velocidade do link (em Mbps): ";
    std::cin >> mbps;
    
    tempo = mb / mbps;
    
    if( tempo >= 60 && tempo <= 3600) {
        tempo = tempo / 60;
        hms = " minuto(s)";
    } else if (tempo > 3600) {
        tempo = tempo / 3600;
        hms = " hora(s)";
    } else if (tempo < 60) {
         hms = " segundo(s)";
    }

    std::cout << "O tempo aproximado para o Dowload é de " << ceil(tempo) << hms << ".";
    
    return 0;
}
