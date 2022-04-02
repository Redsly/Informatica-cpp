#include <iostream>

using namespace std;

int main()
{
    int n, v[10];
    cout <<"N= ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    cout <<endl;
    int i=0;
    while(i<n){
        if(v[i]%2==0){
            for(int j=i+1;j<n;j++){
                v[j-1]=v[j];
            }
            n--;
        }else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]="<<v[i]<<"\t";
    }
    return 0;
}
