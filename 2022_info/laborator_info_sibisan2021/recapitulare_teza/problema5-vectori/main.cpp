#include <iostream>

using namespace std;

int main()
{
    int n,v[10],suma=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
        if(i%2!=0 && v[i]%2==0){
            suma=suma+v[i];
        }
    }
    cout <<suma;
    return 0;
}
