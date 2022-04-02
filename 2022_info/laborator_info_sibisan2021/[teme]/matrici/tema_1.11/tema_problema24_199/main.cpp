#include <iostream>

using namespace std;

int main()
{
    int n,m, p,q;
    cout <<"n=";
    cin>>n;
    cout<< "m=";
    cin>>m;
    float matrice[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "matrice["<<i<<"]["<<j<<"]=";
            cin>>matrice[i][j];
        }
    }
    cout <<"p=";
    cin>>p;
    cout << "q=";
    cin>>q;
    for(int j=0;j<m;j++){
        swap(matrice[p-1][j],matrice[q-1][j]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrice[i][j];
        }
        cout <<endl;
    }
    return 0;
}
