#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[15],c=0,j;
    ifstream in("numere.in");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }for(int i=0;i<n;i++){
        j=i;
        while(a[i]==a[j]){
            if(c==0){
                cout<<a[i]<<" ";
                c=1;
                break;
            }
            j++;
        }
        if(a[i]!=a[i+1]){
            c=0;
        }
    }
    return 0;
}
