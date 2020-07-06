#include <bits/stdc++.h>

using namespace std;

int main(){
    int TAM;
    cin >> TAM;
    char M[TAM][TAM];
    for(int i=0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cin >> M[i][j];
        }
    }
    int flag = 0, cont = 0, maior = 0;
    for(int i=0; i < TAM; i++){
        if(flag == 0){
            for(int j = 0; j < TAM; j++){
                if(M[i][j] == 'o'){
                    cont++;
                }
                if(M[i][j] == 'A'){
                    if(cont > maior){
                        maior = cont;
                    }
                    cont = 0;
                }
            }
            flag = 1;
        }else{
            for(int j = TAM -1; j >= 0; j--){
                if(M[i][j] == 'o'){
                    cont++;
                }
                if(M[i][j] == 'A'){
                    if(cont > maior){
                        maior = cont;
                    }
                    cont = 0;
                }
            }
            flag = 0;
        }
    }
    if(cont > maior){
        maior = cont;
    }
    cout << maior << endl;
    return 0;
}