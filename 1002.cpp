#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double pi = 3.14159, raio, resultado;
    cin >> raio;
    resultado = (raio*raio)*pi;
    cout<< fixed << setprecision(4);
    cout << "A=" << resultado << endl;
    return 0;
}