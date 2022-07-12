#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,c,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        b=log2(n);
        c=pow(2,b)-1;
        cout<<c<<endl;

    }
}
