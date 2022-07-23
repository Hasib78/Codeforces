#include<bits/stdc++.h>
using namespace std;

void alphabet(string s,int t,int a[],int n)
{
   int i,j,count=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<t;j++)
       {
           if(s[j]==a[i])
           {
               count++;
               break;
           }
       }
   }
   if(count==26)
   {
       cout<<"YES"<<endl;

   }
   else
   {
       cout<<"NO"<<endl;
   }

}

int main()
{
    int t;
    int a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    cin>>t;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    alphabet(s,t,a,26);




}
