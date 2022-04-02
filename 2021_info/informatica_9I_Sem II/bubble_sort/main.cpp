#include <iostream>

using namespace std;

int main()
{
int n, a[100], m, schimb, i;
cout<<"n="; cin>>n;
cout<<"Introduceti elementele vectorului: ";
for(i=1; i<=n; i++){
    cin>>a[i];
}
m=n;
do{
    schimb=0;
    for(i=1; i<=m-1; i++){
        if(a[i]>a[i+1])
        {
            swap(a[i], a[i+1]);
            schimb=1;
        }
    }
    m--;
}while(schimb);
for(i=1; i<=n; i++){
    cout<<a[i]<<" ";
}
return 0;
}
