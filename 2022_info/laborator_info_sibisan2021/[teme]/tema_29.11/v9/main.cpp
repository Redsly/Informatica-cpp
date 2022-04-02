#include <iostream>

using namespace std;

int main()
{
    int a[20][20], n, ct=1;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=ct;
             if(ct==9){
                ct=1;
             }else{
                ct++;
             }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << a[i][j]<<"\t";
            }
        }
    }
    return 0;
}
