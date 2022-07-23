#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,j,count;
    int a[1000];
    cin>>n;
    count=0;

    cin>>p;
    for(i=0; i<p; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(j=i; j<p+q; j++)
    {
        cin>>a[j];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<p+q; j++)
        {
            if(a[j]==i)
            {
                count++;
                break;
            }
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else

    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}
