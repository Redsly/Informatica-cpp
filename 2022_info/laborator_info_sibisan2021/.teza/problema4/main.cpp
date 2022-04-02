#include <iostream>

using namespace std;

int main()
{
    int n, nr;
    short unsigned v[100];
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    int primul_nr=v[0], ultimul_nr,nr_el=0, nr_el_u=0;
    for(int i=1;i<n;i++){
        nr_el++;
        if(v[primul_nr]==v[i]){
            if(nr_el>nr_el_u){
                ultimul_nr=i;
                nr_el_u=nr_el;
            }
        }
    }
    for(int i=primul_nr;i<=ultimul_nr;i++){
        cout <<v[i]<<"\t";
    }
    return 0;
}
