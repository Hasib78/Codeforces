#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int t,n,i,a,b,c,d,e,f,x,y,z;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        if(b<=1 || b>1000000 || a>1000000 || a<=0)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            c=a*b;
            if(b%2==0)
            {
                z=c*5;
                d=z/a;
                e=d/b;
                f=d-e;
                if(e==f)
                {
                    e=e+2;
                    f=f-2;
                    x=a*e;
                    y=a*f;
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;

                }
                else
                {
                    x=a*e;
                    y=a*f;
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;

                }
            }
            else
            {
                z=c*4;
                d=z/a;
                e=d/b;
                f=d-e;
                if(e==f)
                {
                    e=e+2;
                    f=f-2;
                    x=a*e;
                    y=a*f;
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;

                }
                else
                {
                    x=a*e;
                    y=a*f;
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;

                }
            }

        }


    }
}
