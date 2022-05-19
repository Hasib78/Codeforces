#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,temp,i,j,k,coun;
    long long int x[1000];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        coun=0;
        for(j=0; j<n; j++)
        {
            cin>>x[j];

        }
        for(k=0; k<n-1; k++)
        {
            for(j=1+i; j<n; j++)
            {
                if(x[k]>x[j])
                {
                    temp=x[k];
                    x[k]=x[j];
                    x[j]=temp;
                }
            }
        }
        for(j=0; j<n; j++)
        {
            if(x[j]>x[0])
            {
                coun++;
            }

        }
        if(x[0]==x[n-1])
        {
            cout<<"0"<<endl;
        }
        else
        {
           cout<<coun<<endl;
        }


    }
}

