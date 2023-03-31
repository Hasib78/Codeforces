#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,q,l,r,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<long long int>v(n+1);
        vector<long long int>pref(n+1,0);
        for(i=1; i<=n; i++)
        {
            cin>>v[i];
            pref[i]=v[i]+pref[i-1];

        }

        for(i=0; i<q; i++)
        {
            cin>>l>>r>>k;
            int sum=pref[n];
            sum-=(pref[r]-pref[l-1]);
            sum=sum+(r-l+1)*k;

            if(sum%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
}
