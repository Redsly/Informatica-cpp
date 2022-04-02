#include <iostream>

using namespace std;

int ok(int n, int k, int n1){
    cout << n<<" "<<k<<" "<<n1<<endl;
    if(n==n1){
        return 1;
    }else{
        if(n1<n){
            return ok(n,k+1, k*n1);
        }
        else{
            return 0;
        }
    }
}
void numere(int n, int i, int &contor){
    int v;
    if(i<n){
        cin>>v;
        contor+=ok(v,1,1);
        numere(n,i+1, contor);
    }else{
        cout <<contor;
    }
}
int main()
{
    int n, gasit=0;
    cin>>n;
    numere(n,0,gasit);
    cout << gasit;
    return 0;
}
