///cod emi debug
#include <iostream>

using namespace std;

int main()
{
    int n, v[100];
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<"\t";
    cout<<endl;
    int i=0;
    while(i<n)
    {
        if(v[i]%2==0)
        {
            for(int j=0;j<n;j++)
                v[j-1]=v[j];
            n--;
        }
        else
            i++;
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<"\t";
    return 0;
}
