#include <iostream>

using namespace std;
void nrfp(int n, int &m){
    int max_fp=0, fp=0;
    for(int i=2;i<=n;i++){
        int d=2,p;
        fp=0;
        while(n>1){
            p=0;
            while(n%d==0){
                p++;
                n/=d;
            }
            if(p){
                fp++;
            }
            d++;
            if(n>1&&d*d>n){
                d=n;
            }
        }
        if(fp>max_fp){
            max_fp=fp;
            m=i;
        }
    }
}
int main()
{
    int n,m;
    cin>>n;
    nrfp(n, m);
    cout << m;
    return 0;
}
