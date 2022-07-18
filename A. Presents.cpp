#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    int a[1000],b[1000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for(i=1;i<=t;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}
