#include<bits/stdc++.h>
using namespace std;

void shift()
{
    long long n,i;
    cin>>n;
    vector<int>v(n);
    long long int sum=0,add=0;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(i=0; i<n; i++)
    {
        sum=sum+v[i];
        add=add+i;
        if(sum<add)
        {
            cout<<"NO"<<endl;
            return;

        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        shift();

    }
}
