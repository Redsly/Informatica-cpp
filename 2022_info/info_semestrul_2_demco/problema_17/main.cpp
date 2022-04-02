#include <iostream>

using namespace std;

void Citeste(int &n, int &m, int mat[100][100])
{
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cout<<"mat["<<i+1<<"]["<<j+1<<"]=";
            cin>>mat[i][j];
        }
}

int Exp(int n, int c)
{
    int nr=0;
    while(n!=0&&n%c==0)
    {
        nr++;
        n/=c;
    }
    return nr;
}

int Nrz(int l, int m, int mat[100][100])
{
    int prd=1;
    for(int i=0;i<m;i++)
        prd*=mat[l][i];
    if(Exp(prd, 2)>Exp(prd, 5))
        return Exp(prd, 5);
    else
        return Exp(prd, 2);
}

void Scrie(int n, int m ,int mat[100][100])
{
    for(int i=0;i<n;i++)
        cout<<Nrz(i,m,mat)<<" ";
}

int main()
{

    int n, m, mat[100][100];
    Citeste(n, m, mat);
    Scrie(n, m, mat);
    return 0;
}
