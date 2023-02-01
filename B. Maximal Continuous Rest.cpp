#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;

    vector<int>v(t);
    for(i=0;i<t;i++)
    {
        cin>>v[i];
    }

    int count=0,num=0;

    for(i=0;i<t*2;i++)
    {
        if(v[i%t]==1)
        {
            count++;
            num=max(count,num);
        }
        else{
            count=0;
        }
    }

    cout<<num<<endl;
}
