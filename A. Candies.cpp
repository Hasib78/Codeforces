#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(k=2;k<30;k++)
        {
            x=pow(2,k)-1;
            if(n%x==0)
            {
                cout<<n/x<<endl;
                break;
            }
        }
    }
}
