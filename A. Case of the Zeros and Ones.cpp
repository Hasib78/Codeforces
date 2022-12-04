#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,zero=0,one=0;
    string s;

    cin>>n;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else{
            one++;
        }
    }
    int x=min(one,zero);
    int y=n-(2*x);

    cout<<y<<endl;
}
