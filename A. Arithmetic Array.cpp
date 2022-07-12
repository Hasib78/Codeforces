#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,x,sum;
    long long int a[100000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        if(sum>n)
        {
            x=sum-n;
            cout<<x<<endl;
        }
        else if(sum<n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}
