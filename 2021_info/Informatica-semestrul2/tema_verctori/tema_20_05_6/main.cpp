#include <iostream>

using namespace std;

int main()
{
    const int a=10, b=10;
    int A[a]={10, 23, 34, 45, 56, 67, 68, 78,98,100}, B[b]={11, 23, 33, 46, 56, 67, 87,99,100, 120},D[a],R[a+b],I[a+b];
    int gasit, index_d=0, index_r=0, index_i=0;
    /*for(int i=1;i<=a;i++){
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
    for(int i=1;i<=b;i++){
        cout << "b["<<i<<"]= ";
        cin >> b[i];
    }*/
    //diferenta
    for(int i = 0; i<a; i++){
        gasit=0;
        for(int j = 0; j<b;j++){
            if(A[i]==B[j]){
                gasit=1;
                break;
            }
        }
        if(gasit==0){
            D[index_d]=A[i];
            index_d++;
        }
    }
    for(int i =0; i<index_d;i++){
        cout << "D["<<i<<"]= "<<D[i]<<endl;
    }
    //reuniune
    for(int i=0; i<a;i++){
        R[index_r]=A[i];
        index_r++;
    }
    for(int i = 0; i<b; i++){
        gasit=0;
        for(int j = 0; j<a; j++){
            if(B[i]==A[j]){
                gasit=1;
            }
        }
        if(gasit==0){
            R[index_r]=B[i];
            index_r++;
        }
    }
    for(int i =0; i<index_r;i++){
        cout << "R["<<i<<"]= "<<R[i]<<endl;
    }
    //intersectia
    for(int i = 0; i<a; i++){
        gasit=0;
        for(int j = 0; j<b;j++){
            if(A[i]==B[j]){
                gasit=1;
                break;
            }
        }
        if(gasit==1){
            I[index_i]=A[i];
            index_i++;
        }
    }
    for(int i = 0; i<index_i;i++){
        cout << "I["<<i<<"]= "<<I[i]<<endl;
    }
    return 0;
}
