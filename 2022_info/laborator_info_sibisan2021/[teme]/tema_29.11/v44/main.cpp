#include <iostream>
using namespace std;

int main()
{
    int n,a[20][20], s, contor, suma_linie=0;
    cout << "n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n+1){
                a[i][j]=1;
            }else{
                if(i==n && j==n){
                    a[i][j]=n;
                }else{
                    a[i][j]=n-1;
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
