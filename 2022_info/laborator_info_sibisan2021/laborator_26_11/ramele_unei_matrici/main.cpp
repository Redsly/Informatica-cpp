#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,mat[20][20];
    ifstream fin("alina.sad");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout <<endl;
    }
    cout <<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==k || j==k || j==m-k || i==n-k){
                    cout <<mat[i][j]<<"\t";
                }
            }
        }
    return 0;
}
