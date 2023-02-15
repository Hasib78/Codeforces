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
        int point=0,point1=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                point++;
            }

            else if(s[i]=='D')
            {
                point--;
            }
            else if(s[i]=='R')
            {
                point1++;
            }
            else if(s[i]=='L')
            {
                point1--;
            }
            if(point==1 && point1==1)
            {
                cout<<"YES"<<endl;
                break;
            }
        }

        if(i==n)
        {
            cout<<"NO"<<endl;
        }

    }
}
