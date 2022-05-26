#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int t,n,a,b,c,i;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        a=n;
        b=100;
        c=__gcd(a,b);

        a/=c;
        b/=c;
        cout<<b<<endl;
        t--;

    }
}
