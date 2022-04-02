#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("numere.txt");
    int n,m,a[20][20], min_linie=1000, max_linii=0;
    cout << "n=";
    cin>>n;
    cout << "m=";
    cin>>m;
    int v[10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>a[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        min_linie=a[i][0];
        for(int j=0;j<m;j++){
            if(a[i][j]<min_linie){
                min_linie=a[i][j];
            }
        }
        min_linie=v[k];
        k++;
    }
    for(int l=0;l<k;l++){
        if(max_linii<v[l]){
            max_linii=v[l];
        }
    }
    cout << max_linii<<endl;
    return 0;
}
