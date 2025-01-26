#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mpp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            mpp[a]++;
        }
        int x=0,y=0,z;
        for(auto i:mpp)
        {
            if(i.second==1)
            {
                x++;
            }
            else{
                y++;
            }
        }
        z=2*((x+1)/2)+y;
        cout<<z<<endl;
    }
    
}