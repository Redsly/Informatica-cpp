#include <iostream>
#include <fstream>
using namespace std;

int main()
{   int a[10], b[10]={0}, c[10], n;
    ifstream in("numere.in");
    in>>n;
    for(int j=0;j<n;j++){
        in>>a[j];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                b[i]++;
            }
            if(a[i]<a[j]){
                b[j]++;
            }
        }
    }
    for(int i=0; i<n;i++){
        c[b[i]]=a[i];
    }
    for(int j=0;j<n;j++){
        if(c[j]==a[0]){
            cout <<j+1;
        }
    }
    return 0;
}
