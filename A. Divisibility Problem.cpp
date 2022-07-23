#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(a<b)
            {
                a=b-a;
                cout<<a<<endl;
            }
            else
            {
                c=a/b;
                c=(c+1)*b;
                c=c-a;
                cout<<c<<endl;
            }
        }
    }
}
