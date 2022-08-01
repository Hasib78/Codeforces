#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,n,b,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        b=a[n-1]-a[i];
        sum=sum+b;
    }
    cout<<sum<<endl;
}
