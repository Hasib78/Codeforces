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
        string s2;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                string s1;
                s1+=s[i-2];
                s1+=s[i-1];
                int x=stoi(s1);
                s2+=('a'+x-1);
                i-=2;
            }
            else
            {

                s2+=('a'+s[i]-1-'0');
            }

        }
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;
    }

}
