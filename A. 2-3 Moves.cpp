#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n%3;
        b=n/3;
        if(n==1)
        {
            cout<<'2'<<endl;
        }
        else if(a==1)
        {
            cout<<b+1<<endl;

        }
        else if(a==2)
        {
            cout<<b+1<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
}
