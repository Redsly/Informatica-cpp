#include <iostream>

using namespace std;
/*const int n=10;
int a[n]={16, 27, 43, 45, 48, 50, 68, 81, 92, 96};
int main()
{
    int m, st, dr, nr, p;
    cin>>nr;
    st=1;
    dr=n;
    while(st<=dr){
        m=(st+dr)/2;
        if(a[m]>=nr){
            p=m;
            dr=m-1;
        }else{
            st=m+1;
        }
    }
    if(a[p]==nr){
        cout << "Numarul "<<nr<<" apare in sir";
    }else{
        cout << "Numarul "<<nr<<" nu apare in sir";
    }
    return 0;
}*/
int main()
{
    int a[20], x, n, st, dr, m, gasit=0,i;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a[i];
    }
    cout << "Ce val cauti? ";cin>>x;
    if(x>=a[1] && x<=a[n]){
        st=1;
        dr=n;
        while(st<=dr && !gasit){
            m=(st+dr)/2;
            if(x==a[m]){
                gasit=1;
            }else{
                if(x<a[m]){
                    dr=m-1;
                }else{
                    st=m+1;
                }
            }
        }
    }
    if(gasit){
        cout << "Numarul "<<x<<" apare in sir";
    }else{
        cout << "Numarul "<<x<<" nu apare in sir";
    }
    return 0;
}
