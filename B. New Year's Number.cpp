#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;

        a=n/2020;
        b=n%2020;

        if(a<1)
        {
            cout<<"NO"<<endl;

        }

        else
        {
            if(b<=a)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
