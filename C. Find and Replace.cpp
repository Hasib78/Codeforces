#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,r;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;

        cin>>s;
        r=0;
        for(i=0;i<n;i+=2)
        {
          for(j=1;j<n;j+=2)
          {
              if(s[i]==s[j])
              {
                  r=1;
                  break;
              }
          }
        }

        if(r==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
