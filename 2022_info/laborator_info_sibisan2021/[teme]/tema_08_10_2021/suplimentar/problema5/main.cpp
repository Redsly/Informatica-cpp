#include <iostream>

using namespace std;

int main()
{
    int n,nr,maxim=0, minim=0,nr_valori=0, c, cifra, nr_copie, cifra_precedenta, ver=0;
    cout<<"n=";
    cin>>n;
    do{
        cout << "Introduceti un numar: ";
        cin>>nr;
        if(nr_valori==0){
            minim=nr;
        }
        nr_copie=nr;
        c=nr_copie%10;
        nr_copie=nr_copie/10;
        cifra_precedenta=c;
        c=nr_copie%10;
        nr_copie=nr_copie/10;
        if(cifra_precedenta>c){
            cifra_precedenta=c;
            while(nr_copie){
                c=nr_copie%10;
                nr_copie=nr_copie/10;
                if(cifra_precedenta<c){
                    break;
                }else{
                    if(maxim<nr){
                        maxim=nr;
                    }
                    if(minim>nr){
                        minim=nr;
                    }
                    nr_valori++;
                }
            }
        }else{
            cifra_precedenta=c;
            while(nr_copie){
                c=nr_copie%10;
                nr_copie=nr_copie/10;
                if(cifra_precedenta>c){
                    break;
                }else{
                    if(maxim<nr){
                        maxim=nr;
                    }
                    if(minim>nr){
                        minim=nr;
                    }
                    nr_valori++;
                }
            }
        }
        n--;
    }while(n);
    if(nr_valori!=0){
        cout << nr_valori<<"\t"<<maxim<<"\t"<<minim;
    }else{
        cout <<"Nu exista";
    }
    return 0;
}
