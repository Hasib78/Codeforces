#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,a,i;
    cin>>t;
    int count=0;
    for(i=0;i<t;i++)
    {
        cin>>p>>q;
        if((q-p)>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
