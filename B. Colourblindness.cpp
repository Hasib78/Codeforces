#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i,x;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        cin>>s>>s1;
        for(i=0;i<n;i++)
        {
            if(s[i]==s1[i])
            {
                continue;
            }
            else
            {
                if((s[i]=='B' && s1[i]=='G') || (s[i]=='G' && s1[i]=='B'))
                {
                  continue;
                }
                else
                {
                    x++;
                }
            }
        }

        if(x==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
