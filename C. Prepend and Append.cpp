#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int j,count=0;

        for(i=0,j=n-1; i<n/2; i++,j--)
        {
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0'))
            {
                count+=2;
            }
            else
            {
                break;
            }
        }
        if(n==1)
        {
            cout<<'1'<<endl;
        }
        else
        {
            cout<<n-count<<endl;
        }


    }
}
