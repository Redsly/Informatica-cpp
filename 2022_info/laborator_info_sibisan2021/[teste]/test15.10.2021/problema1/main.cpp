#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,d, nr_pasi=0, suma_div=0;
    do{
    cout << "a= ";
    cin>>a;
    }while(a>99999);
    for(d=2;d<=a/2;d++){
        nr_pasi++;
        if(a%d==0){
            suma_div=suma_div+d;
        }
    }
    if(suma_div=a){
        cout <<"Numarul este perfect\n";
        cout << "Numarul de pasi este "<<nr_pasi;
    }else{
        cout <<"Numarul nu este perfect\n";
        cout << "Numarul de pasi este "<<nr_pasi;
    }
    return 0;
}
