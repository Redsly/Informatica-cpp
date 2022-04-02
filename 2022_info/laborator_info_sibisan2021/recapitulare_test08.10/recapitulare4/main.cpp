#include <iostream>
///problema6
using namespace std;

int main()
{
    int n, v[10], nr1=0, nr2=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
        nr1=nr1*10+v[i];
    }
    cout<<nr1<<"+";

    for(int i=n-1;i>=0;i--){
        nr2=nr2*10+v[i];
    }

	cout << nr2<<"="<<nr2+nr1;
    return 0;
}
