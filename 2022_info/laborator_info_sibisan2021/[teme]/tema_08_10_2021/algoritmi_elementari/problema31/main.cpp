#include <iostream>

using namespace std;

int main()
{
    int n, contor=1, nr_curent=1;
    do{
        cout << "n=";
        cin>>n;
    }while(n%2==0);
    while(contor<=n){
        if((2*nr_curent+1)%n==0){
            cout << nr_curent <<"\t"<<nr_curent+1<<endl;
            contor++;
        }
        nr_curent++;
    }

    return 0;
}
