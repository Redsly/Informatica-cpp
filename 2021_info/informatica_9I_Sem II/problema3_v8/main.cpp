#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int n, a[20],suma=0, s=0, b[20],j=0;
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
        if((float)sqrt(a[i])==(int)sqrt(a[i])){
            s=s+a[i];
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<b[i];
        suma=suma+b[i];
        if(suma==s){
            cout<<"="<<suma;
        }else{
            cout<<"+
            ";
        }
    }
    return 0;
}
