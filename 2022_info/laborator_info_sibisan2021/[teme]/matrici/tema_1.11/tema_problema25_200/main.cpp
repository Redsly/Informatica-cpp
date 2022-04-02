#include <iostream>

using namespace std;

int main()
{
    float a[20][20];
    int n, m;
    cout << "n=";
    cin>>n;
    cout <<"m=";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "a["<<i<<"]["<<j<<"]=";
            cin>> a[i][j];
        }
    }
    int p, q;
    cout <<"p=";
    cin>>p;
    cout <<"q=";
    cin>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==p){
                swap(a[i][j], a[i][q]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<a[i][j]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
