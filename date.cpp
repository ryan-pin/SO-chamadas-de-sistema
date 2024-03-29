#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // tempo atual em segundos
    time_t tempo_s = time(nullptr);

    // convertendo 
    tm *localTime = localtime(&tempo_s);

    // imprimindo a data formatada
    cout << asctime(localTime) << endl;

    return 0;
}