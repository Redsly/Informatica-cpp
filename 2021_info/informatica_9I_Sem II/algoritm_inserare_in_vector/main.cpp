#include <iostream>

using namespace std;

int main()
{
    int n,k,a[100], x;
    cout << "Cate elemente va avea vectorul? ";
    cin >> n;
    cout << "Introduceti vectorul: "<<endl;
    for(int i=0;i<n;i++){
        cout<< "a["<<i<<"]= ";
        cin>> a[i];
    }
    cout << "Pe ce pozitie doriti sa inserati? ";
    cin >> k;
    cout << "Ce valoare doriti sa inserati? " ;
    cin >> x;
    if(k<=n){
        for(int i=n;i>=k;i--){
            a[i]=a[i-1];
        }
        a[k]=x;
        for(int i=0; i<n+1;i++){
            cout << a[i]<<" ";
        }
    }else{
        a[n+1]=x;
        for(int i=0; i<n+1;i++){
            cout << a[i]<<" ";
        }
    }
    return 0;
}
