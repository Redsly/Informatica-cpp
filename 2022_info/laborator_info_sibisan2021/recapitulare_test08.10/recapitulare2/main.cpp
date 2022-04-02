#include <iostream>

using namespace std;
///problema23
int main()
{
    unsigned int n, n_bk, c, nr1=0;
    cout << "n=";
    cin>>n;
    n_bk=n;
    int i=0;
    ///numarul de cifre a nr n
    while(n_bk){
        c=n_bk%10;
        i++;
        n_bk=n_bk/10;
    }
    ///daca numarul de cifre este impar atunci ultima pereche
    ///de cifre va avea un numar de cifre mai mare decat prima pereche cu 1
    ///daca numarul de cifr este par atunci cele doua perechi vor
    /// avea acelasi numar de cifre
    if(i%2!=0){
        for(int j=0;j<(i/2)+1;j++){
            nr1=nr1*10+n%10;
            n=n/10;
        }
    }else{
        for(int j=0;j<i/2;j++){
            nr1=nr1*10+n%10;
            n=n/10;
        }
    }
    n_bk=0;
    ///se face inversul
    while(nr1){
		n_bk=n_bk*10+nr1%10;
		nr1=nr1/10;
	}
    cout << n<<" "<<n_bk;
    return 0;
}
