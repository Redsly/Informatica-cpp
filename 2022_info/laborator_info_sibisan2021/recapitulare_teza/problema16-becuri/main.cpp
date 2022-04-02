#include <iostream>

using namespace std;
int verificare[10];
int main()
{
    int n, nr, v[10];
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int contor=0;
        for(int j=0;j<n;j++){
            if(v[i]==v[j]){
                contor++;
                if(verificare[i]!=v[i]){
                    cout << v[i]<<"\t"<<contor;
                    verificare[i]=v[i];
                    cout <<endl;
                }
            }
        }
    }
    return 0;
}
