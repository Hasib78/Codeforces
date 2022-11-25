#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    vector<int>vr(t);
    for(i=0;i<t;i++)
    {
        cin>>vr[i];
    }

    sort(vr.begin(),vr.end());

    for(i=0;i<t;i++)
    {
        cout<<vr[i]<<" ";
    }
    cout<<endl;

}
