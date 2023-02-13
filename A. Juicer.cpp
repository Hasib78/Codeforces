#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,n,i;
    vector<int>v;

    cin>>n>>b>>d;

    while(n--)
    {
        cin>>a;
        if(a<=b)
        {
            v.push_back(a);
        }
    }

    int sum=0,count=0;
    for(i=0;i<v.size();i++)
    {
        sum=sum+v[i];
        if(sum>d)
        {
            count++;
            sum=0;
        }
    }

    cout<<count<<endl;
}
