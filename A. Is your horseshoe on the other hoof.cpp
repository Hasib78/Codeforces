#include<bits/stdc++.h>
using namespace std;

int distinct(int a[],int n)
{
   int i,j,res=1;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               break;
           }
       }
       if(j==n)
       {
           res++;
       }
   }
   return res;
}

int main()
{
    int a[10];
    int i,n,b;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    n=distinct(a,4);
    b=4-n;
    cout<<b<<endl;
}
