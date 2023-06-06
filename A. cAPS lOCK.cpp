#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string s;
    bool b=true;
    cin>>s;
    n=s.size();
    for(i=1; i<n; i++)
    {
        if(s[i]>='a')
        {
            b=false;
            break;
        }
    }
    if(b==false)
    {
        cout<<s<<endl;
    }
    else
    {
       char c=s[0];

        transform(s.begin(),s.end(),s.begin(),::tolower);


        if(c>='a')
        {
            c=toupper(c);
        }
        else
        {
            c=tolower(c);
        }
        s[0]=c;

        cout<<s<<endl;
    }
}
