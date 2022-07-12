#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,a1,b1,i;
    cin>>n;
    cin>>a1>>b1;
    c=b1;

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        b1=b1-a+b;
        if(b1>c)
        {
            c=b1;
        }

    }
    cout<<c<<endl;

}
