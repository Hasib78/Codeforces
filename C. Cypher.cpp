#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,b,c,j,k,l,m;
    string s;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int a[n],d[n];
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(k=0; k<n; k++)
        {
            cin>>b;
            cin.ignore();
            getline(cin,s);
            for(l=0; l<b; l++)
            {
                if(s[l]=='D')
                {
                    if(a[k]==9)
                    {
                        a[k]=0;
                    }
                    else
                    {
                        a[k]=a[k]+1;
                    }

                }
                else
                {
                    if(a[k]==0)
                    {
                        a[k]=9;
                    }
                    else
                    {
                        a[k]=a[k]-1;
                    }
                }


            }
            d[k]=a[k];
        }
        for(m=0; m<n; m++)
        {
            cout<<d[m]<<" ";
        }
        cout<<"\n";

    }


}
