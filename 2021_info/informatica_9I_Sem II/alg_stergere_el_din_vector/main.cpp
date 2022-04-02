#include <iostream>

using namespace std;

int main()
{
    int n,k,a[100];
    cout << "Cateelemente va avea vectorul? ";
    cin >> n;
    cout << "Introduceti vectorul: "<<endl;
    for(int i=0;i<n;i++){
        cout<< "a["<<i<<"]= ";
        cin>> a[i];
    }
    cout << "De pe ce pozitie doriti sa stergeti? ";
    cin >> k;
    for(int i=k;i<=n-1;i++){
        a[i]=a[i+1];
    }
    for(int i=0; i<n-1;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
