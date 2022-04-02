#include <iostream>

using namespace std;

int main()
{
    int a[20][20];
    int n, x=1;
    cout << "n=";
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "a["<<i<<"]["<<j<<"]=";
            cin>> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[j]==a[i][j] && x==1){
                x=1;
            }else{
                x=0;
            }
        }
        if(x==1){
            cout <<i<<"\t";
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(v[i]==a[j][i] && x==1){
                x=1;
            }else{
                x=0;
            }
        }
        if(x==1){
            cout << j<<"\t";
        }
    }
    return 0;
}
