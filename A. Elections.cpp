#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,a,b,c,n,x,y,z;

    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        n= max({a,b,c});
        x= n-a;
        y=n-b;
        z=n-c;
        if(a==b && b==c)
        {
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }
        else if(a==b && c>a)
        {
            cout<<x+1<<" "<<y+1<<" "<<z<<endl;
        }

        else if(b==c && a>b)
        {
            cout<<x<<" "<<y+1<<" "<<z+1<<endl;
        }
        else if(c==a && b>a)
        {
            cout<<x+1<<" "<<y<<" "<<z+1<<endl;
        }
        else if(a==b && c<a)
        {
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }

        else if(b==c && a<b)
        {
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }
        else if(c==a && b<a)
        {
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }

        else if(x==0)
        {
            cout<<x<<" "<<y+1<<" "<<z+1<<endl;
        }
        else if(y==0)
        {
            cout<<x+1<<" "<<y<<" "<<z+1<<endl;
        }
        else if(z==0)
        {
            cout<<x+1<<" "<<y+1<<" "<<z<<endl;
        }

    }

}
