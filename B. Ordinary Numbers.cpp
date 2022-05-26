#include<iostream>
using namespace std;
int main()
{
    long long int t,n,a,i;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n>=1 && n<=9)
        {
            a=n/1;
            cout<<a<<endl;
        }
        else if(n>=10 && n<=99)
        {
            a=(n/11)+9;
            cout<<a<<endl;
        }
        else if(n>=100 && n<=999)
        {
            a=(n/111)+18;
            cout<<a<<endl;
        }
        else if(n>=1000 && n<=9999)
        {
            a=(n/1111)+27;
            cout<<a<<endl;
        }
        else if(n>=10000 && n<=99999)
        {
            a=(n/11111)+36;
            cout<<a<<endl;
        }
        else if(n>=100000 && n<=999999)
        {
            a=(n/111111)+45;
            cout<<a<<endl;
        }
        else if(n>=1000000 && n<=9999999)
        {
            a=(n/1111111)+54;
            cout<<a<<endl;
        }
        else if(n>=10000000 && n<=99999999)
        {
            a=(n/11111111)+63;
            cout<<a<<endl;
        }
        else if(n>=100000000 && n<=999999999)
        {
            a=(n/111111111)+72;
            cout<<a<<endl;
        }
        else if(n>=1000000000 && n<=9999999999)
        {
            a=(n/1111111111)+81;
            cout<<a<<endl;
        }

    }
}
