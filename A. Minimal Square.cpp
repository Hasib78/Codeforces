#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
       cin>>a>>b;
       if(b>a)
       {
           swap(a,b);
       }
       c=max(a,b*2);
       cout<<c*c<<endl;
    }
}
