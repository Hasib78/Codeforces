#include<bits/stdc++.h>
using namespace std;
int main()
{
   string p;
   int a,i;
   cin>>p;
   for(i=0;i<p.size();i++)
   {
       if(p[i]=='H' || p[i]=='Q' ||p[i]=='9')
       {
           cout<<"YES"<<endl;
           break;
       }

   }
   if(i==p.size())
   {
       cout<<"NO"<<endl;
   }

}
