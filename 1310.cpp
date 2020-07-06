#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, custo;
    while(cin >> n){
        cin >> custo;
        int lucroDia[n], maiorLucro = 0;
        for(int i = 0; i < n; i++){
            cin >> lucroDia[i];
            lucroDia[i] -= custo;
        }
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += lucroDia[j];
                if(maiorLucro < sum){
                    maiorLucro = sum;
                }
            }
        }
        cout << maiorLucro << endl;
    }
    return 0;
}