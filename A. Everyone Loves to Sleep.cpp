#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,h,m,y,z,h1,m1,b,a,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>h>>m;
        a=h*60+m;

        int count=0,max=10000,min=100000;
        while(n--)
        {
            cin>>h1>>m1;
            x=h1*60+m1;
            if(x>=a)
            {
                if(x<max)
                {
                    max=x;
                }
                count++;
            }
            else
            {
                if(x<=a)
                {
                    if(x<min)
                    {
                        min=x;
                    }

                }

            }

        }
        if(count>0)
        {
            y=max-a;
            z=y/60;
            b=y%60;
            cout<<z<<" "<<b<<endl;
        }
        else
        {
            y=min+1440-a;
            z=y/60;
            b=y%60;
            cout<<z<<" "<<b<<endl;
        }

    }
}
