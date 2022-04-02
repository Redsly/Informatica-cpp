#include <iostream>

using namespace std;
int f(int a){
    int d=2, div=0;
    while(a>2){
        int p=0;
        while(a%d==0){
            a=a/d;
            p++;
        }
        if(p!=0){
            if(div==0){
                div=d;
            }
        }
        d++;
    }
    return div;
}
int main()
{
    int n, nr;
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "Elementul "<<i<<" = ";
        cin>>nr;
        if(f(nr)==nr){
            cout << nr<<endl;
        }
    }
    return 0;
}
