#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    long long int i,t,n,j,c,d,e;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        if(n==1)
        {
            cout<<'1'<<' '<<'0'<<endl;
        }
        else if(n<=0)
        {
            continue;
        }
        else
        {
            a=(n*66.66666666)/100;
            b=round(a/2);
            e=int(b);
            d=2*b;
            c=n-d;
            cout<<c<<' '<<e<<endl;

        }

    }
}
