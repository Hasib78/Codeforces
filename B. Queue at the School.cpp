#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t>>n;
    string s;
    cin>>s;

    for(i=0; i<n; i++)
    {
        for(j=0; j<t-1; j++)
        {

            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;


            }
        }

    }
    for(i=0; i<t; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
