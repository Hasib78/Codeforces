#include<bits/stdc++.h>
using namespace std;

void fun(int even,int odd,int eve[],int od[],int n)
{
    int i;
    if(even==odd)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n/2; i++)
        {
            cout<<eve[i]<<" ";
        }
        for(i=0; i<n/2; i++)
        {
            cout<<od[i]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int od[n],eve[n];
        int odd=0,even=0,j=0,k=0;
        for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                odd=odd+i;
                od[j]=i;
                j++;
            }
            else
            {
                even=even+i;
                eve[k]=i;
                k++;
            }

        }

        if(even>odd)
        {
            x=even-odd;
            int y=od[k-1]+x;
            if(y%2!=0)
            {
                od[k-1]=y;
                odd=odd+x;
                fun(even,odd,eve,od,n);
            }
            else
            {
                cout<<"NO"<<endl;
            }




        }

    }
}

