#include <iostream>

using namespace std;

int main()
{
    int n, v[10], nr_precedent,aux, nr_curent, sortat=1;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    do{
        sortat=1;
        for(int i=0;i<n;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=0;
            }

        }

    }while(!sortat);
    nr_precedent=v[0];
    for(int i=1;i<n;i++){
        nr_curent=v[i];
        if(nr_curent!=nr_precedent){
            cout <<nr_precedent<<"\t";
        }
        nr_precedent=nr_curent;
    }
    return 0;
}
