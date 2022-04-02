#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[10][10], suma=0;
    ifstream fin("numere.txt");
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-1==j){
                suma=suma+a[i][j];
            }
            if(i+1==j){
                suma=suma+a[i][j];
            }
        }
    }
    cout << suma;
    return 0;
}
