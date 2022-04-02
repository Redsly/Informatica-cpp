#include <iostream>

using namespace std;

int main()
{
    int n;
    double v[10];
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
        if((int)v[i]==(int)v[n-1-i]){
            cout << v[i]<<"\t"<<v[n-1-i]<<endl;
        }
    }
    return 0;
}
