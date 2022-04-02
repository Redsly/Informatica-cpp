#include <iostream>
//stergerea unui element dintr-un vector
using namespace std;

int main()
{
    int i,n,x,k,a[50];
    cout << "n= ";
    cin >> n;
    cout << "x= ";
    cin >> x;
    for(i=0;i<n;i++){
        cout<< "a["<<i+1<<"]= ";
        cin>> a[i];
    }
    i=0;
    while(i<n && a[i]!=x){
        i++;
    }
    if(i!=n){
        k=i;
        for(i=k;i<n-1;i++){
            a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++){
            cout << a[i]<<" ";
        }
    }
    else{
        cout << "nu s-a gasit elementul";
    }
    return 0;
}
