#include <iostream>

using namespace std;

int main()
{
int n ,i , j, a[10], min, x, poz;
cout<<"n=";cin>>n;
for(i=0;i<n;i++){
    cout<<"a["<<i<<"]=";
    cin>>a[i];
}

for(i=0;i<n;i++){
    min=a[i];
    poz=i;
    for(j=i+1;j<n;j++){
        if(a[j]<min){
            poz=j;
            min=a[j];
            //cout << a[j]<<endl;
        }
    }
    x=a[i];
    a[i]=a[poz];
    a[poz]=x;
}
for(i=0;i<n;i++)
    cout<<a[i]<<" ";


return 0;
}
