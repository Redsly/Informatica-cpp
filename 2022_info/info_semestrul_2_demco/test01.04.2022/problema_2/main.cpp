#include <iostream>

using namespace std;
int nr(int c, int pare){
    if(c>0){
        if(c%2==0){
            pare++;
        }
        return nr(c/10,pare);
    }else{
        return pare;
    }

}
void sortare(long int a[100], int n,int i,int nr_c_pare){
    int c_p;
    if(i<n){
        c_p=nr(a[i],0);
        if(c_p==nr_c_pare){
            cout <<a[i]<<" ";
        }
        i++;
        sortare(a,n,i,nr_c_pare);
    }else{
        nr_c_pare++;
        i=0;
        if(nr_c_pare<=9){
            sortare(a,n,i,nr_c_pare);
        }
    }
}
int main()
{
    int n;
    long int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int schimb=1;
    do{
        schimb=1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                long int aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                schimb=0;
            }
        }
    }while(!schimb);

    sortare(a,n,0,0);
    return 0;
}
