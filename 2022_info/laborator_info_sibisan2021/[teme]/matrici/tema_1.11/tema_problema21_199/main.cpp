#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout << "n=";
    cin>>n;
    cout << "k=";
    cin>>k;
    int m[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout << "m["i"]["j"]=";
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(i=0 || j=0 || i=n-1 || j=k-1){
                cout << m[i][j]<<"\n";
            }
        }
    }
    return 0;
}
