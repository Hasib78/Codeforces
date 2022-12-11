#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum=0;
    cin>>t;
    vector<int>v(12);
    for(i=0; i<12; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    for(i=0; i<12; i++)
    {
        if(sum<t)
        {
            sum=sum+v[i];

        }
        else
        {
            break;
        }

    }
    if(sum>=t)
    {
        cout<<i<<endl;
    }
    else
    {

        cout<<"-1"<<endl;
    }




}
