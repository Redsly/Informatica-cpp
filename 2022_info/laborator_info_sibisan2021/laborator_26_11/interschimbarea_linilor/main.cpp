#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int mat[20][20], n, m, l;
    ifstream in("alina.sad");
    in>>n;
    in>>m;
    cout<<"l=";
    cin>>l;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            in>>mat[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    int sch=1;
    while(sch){
        sch=0;
        for(int j=0;j<m-1;j++){
            if(mat[l][j]>mat[l][j+1]){
                for(int i=0;i<n;i++){
                    int aux=mat[i][j];
                    mat[i][j]=mat[i][j+1];
                    mat[i][j+1]=aux;
                }
                sch=1;
            }
        }
    }
    cout <<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
