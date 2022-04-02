#include <iostream>

using namespace std;

int main()
{
    int m,n, prim=1, nefermecate=0;
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    int v[n], c;
    for(int i=0;i<n;i++){
        cout << "Ciuperca "<<i<<" = ";
        cin>>c;
        prim=1;
        for(int d=2;d<=c/2;d++){
            if(c%d==0){
                prim=0;
                break;
            }
        }
        if(prim==1){
            v[i]=c;
        }
        else{
            nefermecate++;
        }
    }
    cout << "Doze: "<<n/m<<endl;
    cout << "Doze: "<<n-(n/m)*m-nefermecate<<endl;
    cout << "Nefermecate: "<<nefermecate<<endl;

    return 0;
}
