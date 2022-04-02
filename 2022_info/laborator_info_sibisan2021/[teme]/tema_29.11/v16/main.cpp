#include <iostream>

using namespace std;

int main()
{
    int n, a[10][10];
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=3;
            if(i+j==n-1){
                a[i][j]=0;
            }
            if(i==j){
                a[i][j]=0;
            }
            if(i<j &&i+j<n-1){
                a[i][j]=1;
            }
            if(i>j && i+j>n-1){
                a[i][j]=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
