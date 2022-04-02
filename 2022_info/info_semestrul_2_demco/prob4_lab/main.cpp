#include <iostream>

using namespace std;
int baza(int nr10, int baza){
    while(nr10!=0){
        if(nr10%baza>=2){
            return 0;
        }else{
            nr10/=baza;
        }
    }
    return 1;
}
void det(int a[], int n,int b){
    int ct=1;
    a[0]=0;
    int x=1;
    while(ct<n){
        if(baza(x,b)==1){
            a[ct++]=x;
        }
        x++;
    }
}
void scrie(int a[], int n){
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
}
int main()
{
    int n ,b, a[100];
    cout <<"n= ";
    cin>>n;
    cout <<"b= ";
    cin>>b;
    det(a, n,b);
    scrie(a,n);
    return 0;
}
