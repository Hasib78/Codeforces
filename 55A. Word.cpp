#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    int cap=0,sml=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cap++;
        }
        else

        {
            sml++;
        }

    }

    if(cap>sml)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    else

    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
}
