#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a,b,c,d,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a;
      b=a-6;
      c=b%3;
      d=b/3;
      if(c==0)
      {

          cout<<2+d<<" "<<3+d<<" "<<1+d<<endl;
      }
      else{

        if(c==2)
        {
            cout<<2+1+d<<" "<<3+d+1<<" "<<1+d<<endl;

        }
        else if(c==1)
        {
            cout<<2+d<<" "<<3+d+1<<" "<<1+d<<endl;
        }

      }


  }


}
