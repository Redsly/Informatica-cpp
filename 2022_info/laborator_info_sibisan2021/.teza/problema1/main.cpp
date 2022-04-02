#include <iostream>

using namespace std;

int main()
{
    int nr, v[100], n=0, a, b, contor=0;
    do{
        cout << "nr= ";
        cin>>nr;
        if(nr!=0){
            v[n]=nr;
            n++;
        }

    }while(nr!=0);
    for(int i=1;i<n;i++){
            a=v[i-1];
            b=v[i];
            while(b!=a){
                if(a>b){
                    a=a-b;
                }
                else{
                    b=b-a;
                }
            }
            if(b==1){
                /*cout << v[i-1]<<"\t"<<v[i]<<endl;
                */contor++;
            }
    }

    if(contor==0){
        cout << "NU EXISTA";
    }else{
        cout <<"Numarul de valori este: "<<contor ;
    }
    return 0;
}
