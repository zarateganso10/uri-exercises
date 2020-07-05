#include <bits/stdc++.h>

using namespace std;

int tam = 100;

int main(){
    int v[tam], maior = 0, posicao;
    for(int i = 0; i < tam; i++){
        cin >> v[i];
        if(maior < v[i]){
            maior = v[i];
            posicao = i + 1;
        }
    }
    cout << maior << endl;
    cout << posicao << endl;
}