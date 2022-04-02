#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,a[20],nr,c, s_c=0, b[20],j=0,k, x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        nr=a[i];
        s_c=0;
        while(nr){
            c=nr%10;
            s_c=s_c+c;
            nr=nr/10;
        }
        if(s_c/5==c){
            b[j]=a[i];
            j++;
        }
    }
    j=j-1;
    for(int i=0;i<j;i++){
        x=b[i];
        k=i-1;
        while(b[k]>x && k>=0){
            b[k+1]=b[k];
            k--;
        }
        b[k]=x;
    }
    for(int i=0;i<j;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
