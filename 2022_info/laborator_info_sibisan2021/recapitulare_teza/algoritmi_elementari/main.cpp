#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int  b,n, p, putere,d, sa=1, sb=1;
    /*cout << "Numar 1= ";
    cin>>a;
    */cout << "Numar 1= ";
    cin>>n;
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                if(i==j && i+j==n-1){
                    a[i][j]=0;
                }
                else{
                    a[i][j]=1;
                }
            }
            if(i<j && i+j<n-1){
                a[i][j]=2;//N
            }
            if(i>j && i+j<n-1){
                a[i][j]=3;//V
            }
            if(i<j && i+j>n-1){
                a[i][j]=4;//S
            }
            if(i>j && i+j>n-1){
                a[i][j]=5;//E
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j]<<"\t";
        }
        cout <<endl;
    }
    /*
    int sch, v[10];
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    while(sch!=0){
        sch=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                int aux =v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=1;
            }
        }
    }for(int i=0;i<n;i++){
        cout << v[i]<<endl;
    }
    /*
    for(int d=2;d<=a/2;d++){
        if(a%d==0){
            sa+=d;
        }
    }
    if(sa==b){
        for(int d=2;d<=b/2;d++){
            if(b%d==0){
                sb+=d;
            }
        }
        if(sb==a){
            cout << "Sunt numere prietene. ";
        }else{
            cout << "Nu sunt numere prietene. ";
        }
    }
    else{
        cout << "Nu sunt numere prietene. ";
    }
    p=a*b;
    while(b!=a){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    cout <<b<<endl;
    cout <<p/b;*/
    /*while(n>1){
        putere=0;
        while(n%d==0){
            putere++;
            n=n/d;
        }
        if(putere!=0){
            cout <<d<<" "<<putere<<endl;
        }
        d++;

    }*/

    return 0;
}
