#include <iostream>

using namespace std;

int main()
{
    int n, v[10], sortat,aux;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    do{
        sortat=1;
        for(int i=1;i<n;i++){
            if(v[i-1]<v[i] && v[i-1]!=0){
                aux=v[i-1];
                v[i-1]=v[i];
                v[i]=aux;
                sortat=0;
            }

        }

    }while(!sortat);
    for(int i=0; i<n;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
