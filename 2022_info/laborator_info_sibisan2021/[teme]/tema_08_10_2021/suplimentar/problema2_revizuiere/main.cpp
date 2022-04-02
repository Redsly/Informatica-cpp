#include <iostream>

using namespace std;

int main()
{
    int n,nr,maxim=0, minim=99999999,nr_valori=0, cifra_curenta, nr_copie, cifra_precedenta, trend_crescator, trend_descrescator;
    cout<<"n=";
    cin>>n;
    do{
        cout << "Introduceti un numar: ";
        cin>>nr;
        nr_copie=nr;
        trend_crescator=1;
        trend_descrescator=1;
        if(nr<10){
            trend_crescator=0;
            trend_descrescator=0;
        }
        cifra_precedenta=nr_copie%10;
        nr_copie=nr_copie/10;
        while(nr_copie){
            cifra_curenta=nr_copie%10;
            nr_copie=nr_copie/10;
            if(cifra_curenta<cifra_precedenta){
                trend_descrescator=0;
            }
            if(cifra_curenta>cifra_precedenta){
                trend_crescator=0;
            }
            cifra_precedenta=cifra_curenta;
        }
        if(trend_crescator==1){
            nr_valori++;
            if(maxim<nr){
                maxim=nr;
            }
            if(minim>nr){
                minim=nr;
            }
        }
        if(trend_descrescator==1){
            nr_valori++;
            if(maxim<nr){
                maxim=nr;
            }
            if(minim>nr){
                minim=nr;
            }
        }
        n--;
    }while(n);
    if(nr_valori!=0){
        cout << nr_valori<<endl;
        cout <<maxim<<endl;
        cout <<minim<<endl;
    }else{
        cout <<"Nu exista";
    }
    return 0;
}
