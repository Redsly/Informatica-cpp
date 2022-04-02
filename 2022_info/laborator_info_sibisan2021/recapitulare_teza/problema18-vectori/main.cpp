#include <iostream>

using namespace std;

int main()
{
    int n, v[10], primul;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        primul=v[0];
        for(int j=0;j<n;j++){
            v[j]=v[j+1];
        }
        v[n-1]=primul;
        for(int k=0;k<n;k++){
            cout <<v[k]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
