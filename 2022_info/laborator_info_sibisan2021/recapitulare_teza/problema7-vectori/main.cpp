#include <iostream>

using namespace std;

int main()
{
    int n,v[10],suma=0,contor=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
        if(v[i]!=0){
            suma=suma+v[i];
            contor++;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v[i]=suma/contor;
        }
        cout << v[i]<<"\t";
    }
    return 0;
}
