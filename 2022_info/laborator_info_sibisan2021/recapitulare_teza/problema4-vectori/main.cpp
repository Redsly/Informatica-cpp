#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, v[10];
    double nr;
    fstream fin("numere.txrt");
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        fin>>nr;
        if((int)nr+0.5>nr){
            v[i]=(int)nr;
        }else{
            v[i]=(int)nr+1;
        }

    }
    for(int i=n;i>0;i--){
        cout << v[i]<<"\t";
    }
    return 0;
}
