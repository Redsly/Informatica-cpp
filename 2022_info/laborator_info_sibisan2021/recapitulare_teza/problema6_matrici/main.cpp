#include <iostream>
#include <fstream>
using namespace std;

int a[10][10];
int main()
{
    int n, m;
    ifstream fin("numere.txt");
    fin>>n;
    fin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]%a[i][0]==0){
                a[i][m]++;
            }
        }
    }
    int linie_max, maxim=0;
    for(int i=0;i<n;i++){
        if(a[i][m]>maxim){
            maxim=a[i][m];
            linie_max=i;
        }
    }
    cout << linie_max;
    return 0;
}
