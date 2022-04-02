#include <iostream>

using namespace std;

int main()
{
    int n,m,ct, a[20][20];
    cout << "n=";
    cin>>n;
    cout << "m=";
    cin>>m;
    for(int i=1;i<=n;i++){
        ct=i;
        for(int j=1;j<=m;j++){
            if(i<=j){
                a[i][j]=ct++;
            }else{
                a[i][j]=ct;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout <<a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
