#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int nr, a[10], fr=0, m, intr_schimb, aux;
    ifstream in("numere.in");
    while(in>>nr){
        in>>nr;
        if(nr%2==0){
            a[fr]=nr;;
            fr++;
        }
    }
    m=fr;
    do{
        intr_schimb=0;
        for(int i=0;i<m;i++){
            if(a[i]>a[i+1]){
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                intr_schimb=0;
            }
        }
        m--;
    }while(intr_schimb);
    for(int i=0; i<fr;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
