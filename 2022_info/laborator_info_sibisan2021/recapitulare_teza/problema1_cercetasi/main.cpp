#include <iostream>

using namespace std;

int main()
{
    short unsigned d1, d2, n1,n2, nr1, nr2;
    cout << "d1=";
    cin>>d1;
    cout << "d2=";
    cin>>d2;
    cout << "n1=";
    cin>>n1;
    cout << "n2=";
    cin>>n2;
    nr1=d1*n1;
    nr2=d2*n2;
    while(nr2){
        if(nr1>nr2){
            nr1=nr1-nr2;
        }else{
            nr2=nr2-nr1;
        }
    }
    cout << "Nr de detasamente este "<<nr1<<endl;
    cout  << "Numarul 1 este "<<(d1*n1)/nr1<<endl;
    cout  << "Numarul 2 este "<<(d2*n2)/nr1<<endl;
    return 0;
}
