#include <iostream>

using namespace std;

int main()
{
    int n;
    int v[10];
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==v[0]){
            v[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            cout <<v[i]<<"\t";
        }
    }
    return 0;
}
