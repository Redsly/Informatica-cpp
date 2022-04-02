#include <iostream>

using namespace std;

int main()
{
    /*int a[30], s=0,k;
    cout <<a<<endl<<" ocupa "<<sizeof(a)<<" bytes"<<endl;
   // cout << a[0] << " "<< a[1]<<" "<< a[2]<<" ";
    for(int i=0;i<5;i++){
        cout << "introduceti inaltimea elevului "<<i+1<<": ";
        cin >> a[i];
        s=s+a[i];
    }
    //cout <<"Media inaltimilor este "<<s*1.0/29;
    cout << "k="; cin >>k;
    cout <<  " Inaltimea elevului "<<k<< " este "<< a[k-1];
    */
    int a[4];
    for(int i=0;i<3;i++){
        cout << "introduceti inaltimea elevului "<<i+1<<": ";
        cin >> a[i];
    }
    cout << "Elementele vectorului sunt ";
    for(int i=0; i<3;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
