#include <iostream>
#include <fstream>
using namespace std;

int inter(int &x, int &y){
    int c;
    c=y;
    y=x;
    x=c;
}
int main()
{
    int n, v[10];
    ifstream fin("bac.in");
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    int sortat;
    do{
        sortat=1;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                inter(v[i], v[i+1]);
                sortat=0;
            }
        }
    }while(!sortat);
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\t";
    }
    return 0;
}
