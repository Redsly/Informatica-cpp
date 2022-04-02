#include <iostream>

using namespace std;

int main()
{
    int n, a[100], m;
    cout << "n= ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){//>
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    cout << "a[i]= ";
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout << endl<< "Invers a[i]= ";
    for(int i=n-1;i>0;i-- ){
        cout<<a[i]<<" ";
    }
    /*

    int n, a[100], m, p, aux;
    cout << "n= ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i = 1; i<=n;i++){
        m=a[i];
        p=i;
        for(int j = i+1; j<n;j++){
            if(a[j]>m){//>
                m=a[j];
                p=j;
            }
        }
        swap(a[i],a[p]);
    }
    cout << "a[i]= ";
    for(int i = 1;i<=n;i++){
        cout << a[i]<<" ";
    }*/
    return 0;
}
