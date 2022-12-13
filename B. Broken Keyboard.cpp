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
        for(i=0; i<n; i+=3)
        {
            if(i+1<n && i+2<n)
            {
                if(s[i+1]==s[i+2])
                {
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }

            }
            else
            {
                if(i+1<n)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else
                {
                    cout<<"YES"<<endl;
                    break;
                }

            }
        }
        if(i==n)
        {
            cout<<"YES"<<endl;
        }
    }
}
