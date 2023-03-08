#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,s1="meow";
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(unique(s.begin(),s.end()),s.end());//continues number make unique
        if(s==s1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
