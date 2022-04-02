#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("alg.txt");
    int n,a[10], b[10]={0}, c[10];
    in>>n;
    for(int i=0; i<n;i++){
        in>>a[i];
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
    for(int i=0; i<n;i++){
        cout << c[i]<<" ";
    }
    return 0;
}
