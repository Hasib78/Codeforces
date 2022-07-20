#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,a,b,sum=0;
    cin>>t;
    b=t;
    while(t--)
    {
        cin>>n;
        sum=sum+n;
    }
    a=sum/b;
    cout<<a<<endl;
}
