#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, v[10], m;
    ifstream fin("numere.txt");
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>v[i];
    }
    cout <<"m=";
    cin>>m;
    int i, j;
    for(int k=0;k<m;k++){
        cout << "i= ";
        cin>>i;
        cout << "j= ";
        cin>>j;
        int l=0;
        while(i+l<j-l){
            swap(v[i+l], v[j-l]);
            l++;
        }
        cout << endl;
        for(int w=1;w<=n;w++){
            cout << v[w]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
