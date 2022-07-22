#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int c[1000],i;
    cin>>a>>b;
    for(i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            c[i]=1;
        }
        else
        {
            c[i]=0;
        }
    }
    for(i=0;i<a.length();i++)
    {
        cout<<c[i];
    }


}
