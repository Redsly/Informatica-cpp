#include <iostream>

using namespace std;

int Cif(int nr){
    if(nr>10){
        return Cif(nr/10);
    }
    else{
        return nr;
    }
}
void Afis(int a[100], int n, int c, int i){
    int cd;
    if(i<n){
        cd=Cif(a[i]);
        if(cd==c){
            cout <<a[i]<<" ";
        }
        i++;
        Afis(a,n,c,i);
    }else{
        c++;
        i=0;
        cout << endl;
        if(c<=9){
            Afis(a,n,c,i);
        }
    }
}

int main()
{
    int a[100], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    Afis(a,n,1,0);
    return 0;
}
