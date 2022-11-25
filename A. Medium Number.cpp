#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    return (a<b);
}
int main()
{
    int t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=max({a,b,c});
        y=min({a,b,c},comp);
        if(a<x && a>y)
        {
            cout<<a<<endl;
        }
        else if(b<x && b>y)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}
