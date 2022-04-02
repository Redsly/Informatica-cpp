#include <iostream>

using namespace std;

int main()
{
    unsigned int n, q ,p, c_r=0, c_a=0, c_v=0;
    cout << "n=";
    cin>>n;
    cout << "p=";
    cin>>p;
    cout << "q=";
    cin>>q;
    for(int i=1;i<=n;i++){
        if(i%p==0){
            c_r++;
        }
        if(i%q==0){
            c_a++;
        }
        if(i%p==0 && i%q==0){
            c_v++;
        }
    }
    cout <<"Nevopsite "<<n-c_a-c_r+c_v<<endl;
    cout <<"Rosu "<<c_r-c_v<<endl;
    cout <<"Albastru "<<c_a-c_v<<endl;
    cout <<"Violet "<<c_v<<endl;
    return 0;
}
