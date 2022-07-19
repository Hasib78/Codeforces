#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,c;
    cin>>t>>n;
    if(t%2==0)
    {
        b=t/2;

        if(n>b)
        {
            a=n-b;
            cout<<a*2<<endl;
        }
        else
        {
            cout<<(n*2-1)<<endl;
        }
    }
    else
    {
        b=t/2+1;
        if(n>b)
        {
            a=n-b;
            cout<<2*a<<endl;
        }
        else

        {
            cout<<(n*2-1)<<endl;
        }
    }
}
