#include <iostream>

using namespace std;

int main()
{
    int n,p,a[10][10], ct, pp;
    cout << "n=";
    cin>>n;
    cout<<"p=";
    cin>>p;
    int v[10];
    ct=1;
    for(int k=0;k<n*p;k++){
        do{
            pp=ct*ct;
            ct++;
        }while(pp%2==0);
        v[k]=pp;
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            a[i][j]=v[k];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cout <<a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
