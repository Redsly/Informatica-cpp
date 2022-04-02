#include <iostream>

using namespace std;

int main()
{
    int n, a[10][10], ct;
    cout << "n=";
    cin>>n;
    ct=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=ct;
            if(i+j==n-1){
                a[i][j]=0;
            }
        }
        ct--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
