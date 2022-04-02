#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n=0, a[10], imp=0, b[10];
    ifstream in("bac.in");
    while(!in.eof()){
        in>>a[n];
        if(a[n]%2!=0){
            b[imp]=a[n];
            imp++;
        }
        n++;
    }
    for(int i=0;i<imp;i++){
        if(b[i]%2!=0){
        }
        if(i>=imp-2){
            cout<< b[i]<<" ";
        }
    }
    return 0;
}
