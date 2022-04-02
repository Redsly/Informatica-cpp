#include <iostream>

using namespace std;

int main()
{
    int n, a[10][10], ct;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        ct=n;
        for(int j=0;j<n;j++){
            a[i][j]=ct;
            ct--;
            if(i==j){
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
