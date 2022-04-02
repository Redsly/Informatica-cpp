#include <iostream>

using namespace std;

int main()
{
    int n, v[20];
    cout << "n=" ;
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>> v[i];
    }
    for(int i=0;i<n;i++){
        for(int k=v[i]+1; k<v[i+1];k++){
            if(k<100){
                for(int j=0;j<n;j++){
                    if(v[j]==k){
                        k++;
                    }
                }
                if(k<100){
                    cout << k<<"\t";
                }
            }
        }
    }
    return 0;
}
