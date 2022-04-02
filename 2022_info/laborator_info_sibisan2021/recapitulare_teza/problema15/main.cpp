#include <iostream>

using namespace std;

int main()
{
    int n, v[20];
    cout << "n= ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(v[i]==v[j] && i!=j){
                    v[j]=0;
                }
            }
    }
    for(int j=0;j<n;j++){
        if(v[j]>0){
            cout << v[j]<<"\t";
        }
    }
    return 0;
}
