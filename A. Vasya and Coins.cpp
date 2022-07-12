#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x,y,i,t;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
           x=a*1+b*2;
           y=x+1;
           cout<<y<<endl;
        }

    }

}
