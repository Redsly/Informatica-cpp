#include <iostream>

using namespace std;

int main()
{
    int n, a[10][10];
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2!=0){
                a[i][j]=i;
            }else{
                a[i][j]=j;
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
