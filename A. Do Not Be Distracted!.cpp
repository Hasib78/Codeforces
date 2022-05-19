#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,b[1000],count,k;
    char a;
    cin>>t;
    for(i=0; i<t; i++)
    {
        count=0;
        cin>>n;
        cin>>a;
        b[0]=a;
        for(j=1; j<n; j++)
        {
            cin>>a;
            b[j]=a;
            if(b[j]!=b[j-1])
            {
                for(k=j-1; k>=0; k--)
                {
                    if(b[j]==b[k])
                    {
                        count++;
                    }

                }
            }


        }
        if(count>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }

}
