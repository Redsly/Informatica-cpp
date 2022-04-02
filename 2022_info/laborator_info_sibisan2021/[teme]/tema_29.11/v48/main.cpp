#include <iostream>
using namespace std;

int main()
{
    int n,a[20][20],nr=0;
    cout << "n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            do{
                nr++;
            }while(nr%2!4=0);
            a[i][j]=nr;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout <<a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
