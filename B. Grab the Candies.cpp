#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int even=0,odd=0;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even=even+v[i];
            }
            else
            {
                odd=odd+v[i];
            }
        }
        if(even>odd)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
