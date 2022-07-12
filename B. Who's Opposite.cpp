#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,n,a,b,c,i,j,x,y,z,p,q;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        n=abs(a-b);
        x=n-1;
        y=x*2+2;
        if(x==0 || a>y || b>y)
        {
            cout<<"-1"<<endl;
        }
        else if(c<=y)
        {
            p=c+n;
            q=c-n;
            if(p!=a && p!=b && p<=y)
            {
                cout<<p<<endl;
            }
            else if(q!=a && q!=b && q<=y && q>0)
            {
                cout<<q<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}
