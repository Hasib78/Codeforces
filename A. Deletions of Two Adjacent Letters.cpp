#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,t,x;
    string s;
    char c;
    cin>>t;
    for(i=0; i<t; i++)
    {

        cin>>s;
        cin>>c;
        bool flag= false;

        for(j=0; j<s.size(); j+=2)
        {

            if(c==s[j])
            {
                 flag=true;
            }

        }

        if(flag)
        {
            cout<<"YES"<<endl;

        }

        else
        {

            cout<<"NO"<<endl;
        }


    }
}
