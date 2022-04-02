#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, k, a[100], b[100], c[200];
    cout << "m= ";cin>>m;
    cout << "Introduceti el din primul sir. ";
    for(int i=0; i<m;i++){
        cin>> a[i];
    }
    cout << "n= ";cin>>n;
    cout << "Introduceti el din al doilea sir. ";
    for(int i=0; i<n;i++){
        cin>> b[i];
    }
    k=0;
    i=0;
    j=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(j>n){
        for(int l=i;l<=m;l++){
            c[k]=a[l];
            k++;
        }
    }
    if(i>m){
        for(int l=j;l<=n;l++){
            c[k]=b[l];
            k++;
        }
    }
    for(int i=0; i<=m+n;i++){
        cout << c[i]<<" ";
    }
    return 0;
}
