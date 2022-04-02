#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.radu");
void citire(int a[100],int &n){
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>a[i];
    }

}
int caut_bin(int a[100], int n, int st, int dr,int x){
    int m;
    if(st>dr){
        return -1;
    }else{
        m=(st+dr)/2;
        if(x==a[m]){
            return m;
        }else{
            if(x<a[m]){
                return caut_bin(a,n,st,m-1,x);
            }else{
                return caut_bin(a,n,m+1,dr,x);

            }
        }
    }
}

int main()
{
    int a[100], n;
    citire(a,n);
    cout << caut_bin(a, n, 0, 14, 12);
    return 0;
}
