#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>s;
    n=s.size();

    for(i=0; i<n; i++)
    {
        if(s[0]=='1')
        {
            if(s[i]=='1' || s[i]=='4')
            {
                if((s[i]=='4') && (s[i]==s[i+1]) && (s[i]==s[i+2]))
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }

        }

        else
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"YES"<<endl;
    }

}
