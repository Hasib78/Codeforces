#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,l,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s[n+1][n+1];
        m=(n+1)/2;
        if(k>m)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    s[i][j]='.';
                }

            }


            for(i=0; i<n; i++)
            {
                if(k==0)
                {
                    break;
                }
                else if(i%2==0)
                {
                    s[i][i]='R';
                    k--;
                }

            }

            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<s[i][j];
                }
                cout<<endl;

            }

        }



    }

}

