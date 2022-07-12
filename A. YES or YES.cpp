#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>s;
        if(s=="YES" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS" || s=="YEs" || s=="yES" || s=="YeS")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
