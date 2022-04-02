#include <iostream>
//fara matrici
using namespace std;

int main()
{
    int nr=0, nr1=0, c, p=1;
    cin>>c;
    while(c!=0){
        nr=nr*10+c;
        nr1+=p*c;
        p*=10;
        cin>>c;
    }
    cout << "Numarul compus "<<nr<<"\n";
    cout << "Numarul compus invers "<<nr1<<"\n";
    return 0;
}
