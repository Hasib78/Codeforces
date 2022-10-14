#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        d=max({a,b,c});
        e=a+b+c;
        f=e-d;
        if(f==d){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }
}
