#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,t,p,q,r;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>n;

        {
            p=n%x;
            if(p==y)
            {
                cout<<n<<endl;
            }

            else if(p>=y)
            {
                q=p-y;
                r=n-q;
                cout<<r<<endl;
            }
            else
            {
                q=p+x-y;
                r=n-q;
                cout<<r<<endl;
            }
        }

    }

}
