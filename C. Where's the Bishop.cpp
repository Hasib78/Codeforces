#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k;
    char a[10][10];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cout<<" "<<endl;

        for(j=1; j<=8; j++)
        {
            for(k=1; k<=8; k++)
            {
                cin>>a[j][k];
            }
        }
        for(j=1; j<=8; j++)
        {
            for(k=1; k<=8; k++)
            {
                if(a[j][k]=='#')
                {

                    if(a[j][k]==a[j-1][k-1] && a[j][k]==a[j+1][k+1] && a[j][k]==a[j-1][k+1] && a[j][k]==a[j+1][k-1])
                    {
                        cout<<j<<" "<<k<<endl;
                        break;
                    }



                }
            }
        }
    }
}
