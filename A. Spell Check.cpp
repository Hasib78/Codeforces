#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;

    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(n==5)
        {
            int j=0,t=0,m=0,u=0,r=0;
            for(i=0; i<n; i++)
            {
                if(s[i]=='T')
                {
                    t++;
                }
                else if(s[i]=='i')
                {
                    j++;
                }
                else if(s[i]=='m')
                {
                    m++;
                }
                else if(s[i]=='u')
                {
                    u++;
                }
                else if(s[i]=='r')
                {
                    r++;
                }
            }
            if(t==1 && j==1 && m==1 && r==1 && u==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;

        }


    }
}
