#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10], b[10]={0},c[10],k,nr, n=0, i,g=0;
    cout<<"k=";
    cin>>k;
    ifstream in("numere.txt");
    while(!in.eof()){
        in>>a[n];
        n++;
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
    for(i=0;i<n;i++){
        if(k==a[i]){
            g=1;
            cout<<n-i;
            break;
        }
    }
    if(!g){
        cout << "Nu exista";
    }
    return 0;
}
