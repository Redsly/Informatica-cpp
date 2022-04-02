#include <iostream>

using namespace std;

int main()
{
    int i, j=0, k=0, n, a[100], b[100], c[100];
    cout << "n= ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << "a["<<i+i<<"]= ";
        cin>> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }else{
            c[k]=a[i];
            k++;
        }
    }
    if(j){
        cout<<"Numerele pare sunt: "<<endl;
        for(i=0;i<j;i++){
            cout << b[i]<<" ";
        }
    }else{
        cout << "Nu exista numere pare"<<endl;
    }
    if(k){
        cout << "numerele impare sunt: "<<endl;
        for(i=0; i<k;i++){
            cout << c[k]<<" ";
        }
    }else{
        cout << "Nu exista numere impare."<<endl;
    }
    return 0;
}
