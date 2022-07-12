#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,i,a;
    cin>>k>>n>>w;
    int sum=0;
    for(i=1;i<=w;i++)
    {
       sum=sum+k*i;
    }
    a=sum-n;
    if(a<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
       cout<<a<<endl;
    }

}
