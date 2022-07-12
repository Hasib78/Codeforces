#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,i,a,sum=0;
    cin>>t>>h;
    int ar[t];
    for(i=0;i<t;i++)
    {
       cin>>ar[i];
       a=h-ar[i];
       if(a>=0)
       {
           sum=sum+1;
       }
       else
       {
           sum=sum+2;
       }
    }
    cout<<sum<<endl;
}
