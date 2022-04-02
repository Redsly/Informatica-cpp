#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");


void Citire(int v[100],int n, int i=0){
    if(i<n){
        fin>>v[i];
        Citire(v,n,++i);
    }
}
void maxim_r(int v[100],int n, int i=0, int maxim=0){
    if(i<n){
        if(maxim<v[i]){
            maxim=v[i];
        }
        maxim_r(v,n,i+1, maxim);
    }
}

void minim_r(int v[100],int n, int i=0, int &minim=v[0]){
    if(i<n){
        if(minim>v[i]){
            minim=v[i];
        }
        minim_r(v,n,i+1, minim);
    }
}

int main()
{
    int n, v[100];
    cout << "N=";
    cin>>n;
    Citire(v,n,0);
    int minim=v[0], maxim=v[0];
    maxim_r(v,n,0, maxim);
    minim_r(v,n,0, minim);
    cout << endl<<maxim<<" "<<minim;
    return 0;
}
