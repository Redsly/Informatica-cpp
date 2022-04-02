#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int m,n, x,c_m=0, c_n=0, a[10], b[10];
    in>>m>>n;
    for(int i=0;i<m;i++){
        in>>x;
        if(x%2!=0){
            a[c_m]=x;
            c_m++;
        }
    }
    for(int i=0;i<n;i++){
        in>>x;
        if(x%2!=0){
            b[c_n]=x;
            c_n++;
        }
    }
    int k=0, j=0, i=0, c[20];;
    while(i<c_m && j<c_n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
    }
    for(;i<c_m;i++){
        c[k++]=a[i];
    }
    for(;j<c_n;j++){
        c[k++]=b[j];
    }
    for(int i=0;i<k;i++){
        if(c[i]%2!=0){
            cout<< c[i]<<" ";
        }
    }
    return 0;
}
