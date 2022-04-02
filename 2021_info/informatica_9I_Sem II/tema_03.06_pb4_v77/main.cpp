#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[12]={0}, nr,m;
    ifstream in("bac.in");
    in>>n;
    for(int i=0;i<n;i++){
        in>>nr;
        a[nr]++;
    }
    m=a[0];
    for(int i=1; i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    for(int i=0; i<n;i++){
        if(a[i]==m)
            cout << i<<" ";
    }
    return 0;
}
