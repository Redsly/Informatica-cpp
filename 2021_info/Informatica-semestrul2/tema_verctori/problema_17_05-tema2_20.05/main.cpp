#include <iostream>

using namespace std;

int main()
{
    int a[35],x, n, i,gasit=0;
    cout <<"Cate elemente cititi? ";
    cin >> n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    cout << "ce valoare cautati? ";
    cin>>x;
    i=1;
    while(i<=n){
        if(x==a[i]){
            gasit++;
        }
        i++;
    }
    if(gasit){
        cout << "DA, de "<<gasit<<" ori.";
    }else{
        cout << "NU";
    }
    return 0;
}
