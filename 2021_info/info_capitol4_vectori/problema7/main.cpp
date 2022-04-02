#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,a[10];
    ifstream in("numere.in");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i-1]){
            for(int m=i;m<n;m++){
                a[m]=a[m+1];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
