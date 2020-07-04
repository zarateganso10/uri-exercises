#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b,c, r;
    cin >> a >> b >> c;
    r = (a*2 + b*3 + c*5)/10;
    cout<< fixed << setprecision(1);
    cout << "MEDIA = " << r << endl;
    return 0;
}