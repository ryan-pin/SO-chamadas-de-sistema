#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream uptimeFile("/proc/uptime");
    // abre o uptime    
    double up_segundos;
    uptimeFile >> up_segundos;
    uptimeFile.close();
    // fecha  
    // converter horas, minutos e segundos
    int upt_horas = static_cast<int>(up_segundos / 3600);
    int upt_minutos = static_cast<int>((up_segundos - upt_horas * 3600) / 60);
    int upt_segundos = static_cast<int>(up_segundos - upt_horas * 3600 - upt_minutos * 60);
    
    cout << "O computador esta ligado a: " << upt_horas << " horas, " 
              << upt_minutos << " minutos, " << upt_segundos << " segundos" << endl;

    return 0;
}