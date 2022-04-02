#include <iostream>

using namespace std;

int main()
{
    int n, v[10], c_poz=0, max_poz=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
        if(v[i]<0){
            c_poz=0;
        }
        else{
            c_poz++;
            if(max_poz<c_poz){
                max_poz=c_poz;

            }
        }
    }
    cout<< max_poz;
    return 0;
}
