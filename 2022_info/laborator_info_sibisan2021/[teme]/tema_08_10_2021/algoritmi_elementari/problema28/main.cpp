#include <iostream>

using namespace std;

int main()
{
    unsigned int n, c, cifra_unitati, contor_aparitii=1;
    do{
        cout << "n= ";
        cin>>n;
    }while(n<=1000);
    cifra_unitati=n%10;
    n=n/10;
    while(n){
        c=n%10;
        if(c==cifra_unitati){
            contor_aparitii++;
        }
        n=n/10;
    }
    cout << cifra_unitati<<" apare de "<<contor_aparitii<<" ori";
    return 0;
}
