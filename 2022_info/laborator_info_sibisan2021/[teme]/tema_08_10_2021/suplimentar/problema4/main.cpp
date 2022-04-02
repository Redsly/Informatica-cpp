#include <iostream>

using namespace std;

int main()
{
    int n, nr_capete=6;
    cout << "n=";
    cin>>n;
    nr_capete=nr_capete-1;
    for(int i=1;i<n;i++){
        nr_capete=nr_capete+6;
        nr_capete=nr_capete-1;
    }
    cout<< nr_capete;
    return 0;
}
