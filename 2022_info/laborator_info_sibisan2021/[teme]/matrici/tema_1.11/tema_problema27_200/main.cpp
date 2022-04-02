#include <iostream>

using namespace std;

int main()
{
    int a[20][20];
    int n, m, suma_linie=0,suma_coloana=0, max_linie=0, max_coloana=0,i_max, j_max;
    cout << "n=";
    cin>>n;
    cout <<"m=";
    cin>>m;
    for(int i=0;i<n;i++){
        suma_linie=0;
        for(int j=0;j<m;j++){
            cout << "a["<<i<<"]["<<j<<"]=";
            cin>> a[i][j];
            suma_linie=suma_linie+a[i][j];
        }
        if(suma_linie>max_linie){
            max_linie=suma_linie;
            i_max=i;

        }
    }
    for(int j=0;j<m;j++){
        suma_coloana=0;
        for(int i=0;i<n;i++){
            suma_coloana=suma_coloana+a[j][i];
        }
        if(suma_coloana>max_coloana){
            j_max=j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout <<a[i][j]<<"\t";
        }
        cout <<endl;
    }
    cout<<i_max<<"\t"<<j_max;
    return 0;
}
