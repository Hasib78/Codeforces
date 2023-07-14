#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c;
    if(a>1 && b>1 && c>1)
    {
        cout<<a*b*c<<endl;
    }
    else if(a==1 && c==1)
    {
        x=a+b+c;
        cout<<x<<endl;
    }

    else if(a==1)
    {
        x=(a+b)*c;
        cout<<x<<endl;

    }
    else if(c==1)
    {
        y=a*(b+c);
        cout<<y<<endl;
    }
    else{
        x=a*(b+c);
        y=(a+b)*c;
        cout<<max(x,y)<<endl;
    }
}
