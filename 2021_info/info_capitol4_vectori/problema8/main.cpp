#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int n, x, a[10], v=0;
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    in>>x;
    for(int i=n-1;i>=0;i--){
        if(a[i]<=x && v==0){
            v=1;
            cout<<a[i];
        }
    }
    if(v==0){
        cout<<"NU EXISTA";
    }
    return 0;
}
