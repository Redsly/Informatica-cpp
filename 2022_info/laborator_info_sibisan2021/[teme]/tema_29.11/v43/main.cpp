#include <iostream>
using namespace std;

int main()
{
    int n, a[20][20];
    cout << "n=";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                a[i][j]=2;
            }else{
                if(i>j){
                    a[i][j]=3;
                }else{
                    a[i][j]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
