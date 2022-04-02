#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, a[20][20], v[20];
    ifstream fin("date.in");
    ofstream fout("date.out");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            int aux=a[i][j-1];
            a[i][j-1]=a[i][j];
            a[i][j]=aux;
            ///sau
            /*swap(a[i][j], a[i][j-1]);*/
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fout<<a[i][j]<<"\t";
        }
        fout << endl;
    }
    return 0;
}
