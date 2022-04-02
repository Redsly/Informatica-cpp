#include <iostream>

using namespace std;

int main()
{
    int n, nr_capete=0;
    cout << "n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        nr_capete=nr_capete-1;
        nr_capete=nr_capete+6;
    }
    cout << nr_capete;
    return 0;
}
