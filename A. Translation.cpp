#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,str;
   int i,res;
   cin>>s>>str;
   reverse(s.begin(),s.end());
   res=s.compare(str);
   if(res==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}


