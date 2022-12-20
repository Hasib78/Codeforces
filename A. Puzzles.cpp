#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,x,j,mini,y;
    cin>>n>>m;
    vector<int>v(m);
    for(i=0;i<m;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    mini=1000;

    for(i=0,j=n-1;j<m;i++,j++)
    {
        y=v[j]-v[i];

        if(y<mini)
        {
            mini=y;
        }
    }
    cout<<mini<<endl;

}
