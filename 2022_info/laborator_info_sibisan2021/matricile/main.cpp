#include <iostream>

using namespace std;

int main()
{
    int n,m,mat[10][10];
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "mat["<<i<<"]["<<j<<"]=";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
