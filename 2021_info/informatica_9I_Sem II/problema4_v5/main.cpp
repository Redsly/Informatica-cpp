#include <iostream>

using namespace std;

int main()
{
    int n, a[10],b[10]={0}, prim, d, j=0,minim, p;
    cout<<"n= ";
    cin>>n;
    cout<<"Introduceti elementele: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        prim=1;
        d=2;
        while (d<=a[i]/2)
        {
            if (a[i]%d==0){
                prim=0;
            }
            d=d+1;
        }
        if(prim==1){
            b[j]=a[i];
            j++;
        }
    }
    for(int k=0;k<j;k++){
        minim=b[k];
        p=k;
        for(int i=k+1; i<j;i++){
            if(b[i]<minim){
                minim=b[i];
                p=i;
            }
        }
        swap(b[p],b[k]);
    }
    for(int i=0; i<j; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
