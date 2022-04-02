#include <iostream>

using namespace std;

int main()
{
    int n,m, v[10], suma1=0, suma2=0, suma=0;
    cout <<"n=";
    cin>>n;
    cout <<"m=";
    cin>>m;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int k=0;k<m;k++){
        suma1=suma1+v[k];
    }
    for(int i=m;i<n;i++){
        for(int k=0;k<m;k++){
            suma2=suma2+v[i+k];
        }
        if(suma1<suma2){
            suma=suma2;
        }else{
            if(suma<suma1){
                suma=suma1;
            }
        }
        suma2=0;
        suma1=suma2;
    }
    cout << suma;
    return 0;
}
