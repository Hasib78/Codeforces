#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==3)
        {
            cout<<"NO"<<endl;
        }
        else if(n&1)
        {
            cout<<"YES"<<endl;

            for(i=1; i<=n; i++)
            {
                if(i&1)
                {
                    cout<<n/2-1<<" ";
                }
                else
                {
                    cout<<-n/2<<" ";
                }


            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<n/2; i++)
            {
                cout<<"3 -3 ";


            }
        }


    }
}
