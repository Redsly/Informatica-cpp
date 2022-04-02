#include <iostream>

using namespace std;

int main()
{
    int n;
    int v[10];
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    int sch;
    while(sch==1){
        sch=0;
        for(int i=0;i<n;i++){
            if(v[i]<v[i+1]){
                if(v[i]==0){
                    int aux=v[i+1];
                    v[i+1]=v[i+2];
                    v[i+2]=aux;
                    sch=1;
                }
                else{
                    int aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    sch=1;
                }

            }
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
