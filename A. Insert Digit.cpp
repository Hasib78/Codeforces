#include<bits/stdc++.h>
using namespace std;

void digit()
{
    int n,d,i,j;
    string s;
    cin>>n>>d;

    cin>>s;

    for(i=0; i<n; i++)
    {
        if(s[i]-'0'>=d)
        {
            cout<<s[i];
        }
        else
        {
            cout<<d;

            for(j=i; j<n; j++)
            {
                cout<<s[j];
            }
            cout<<endl;
            return;
        }
    }
    cout<<d<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        digit();
    }
}
