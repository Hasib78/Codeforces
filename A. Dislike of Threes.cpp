#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,a,b,i,j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>k;
        a=0;
        for(j=1; j<=1666; j++)
        {
            if(j%3==0 || j%10==3)
            {
                continue;
            }
            else
            {
                a++;
                if(a==k)
                {
                    cout<<j<<endl;
                    break;
                }
            }


        }




    }
}
