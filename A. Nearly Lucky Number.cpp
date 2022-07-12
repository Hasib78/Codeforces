#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j;
    string s;

    cin>>s;
    int count=0;
    for(j=0; j<s.length(); j++)
    {
        if(s[j]=='4' || s[j]=='7')
        {
            count++;
        }
    }

    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
