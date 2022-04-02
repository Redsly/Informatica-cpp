#include <iostream>

using namespace std;
int main()
{
    int nr, n=0, a[20][20], nr_copie, cifre[10], c;
    cout << "nr=";
    cin>>nr;
    nr_copie=nr;
    while(nr_copie!=0){
        c=nr_copie%10;
        cifre[n]=c;
        nr_copie=nr_copie/10;
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=cifre[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}

