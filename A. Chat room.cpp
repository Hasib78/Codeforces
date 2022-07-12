#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,str="hello";
   int i,j;
   cin>>s;
   j=0;
   int count=0;
   for(i=0;i<s.size();i++)
   {
       if(s[i]==str[j])
       {
           count++;
           j++;
       }
   }
   if(count==5)
   {
       cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
