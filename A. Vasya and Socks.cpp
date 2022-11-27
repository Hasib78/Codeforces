#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum,y,x;

    cin>>n>>m;
    sum=n;

    while(n>=m)
    {

        x=n/m;
        y=n%m;
        n=x+y;
        sum=sum+x;

    }

    cout<<sum<<endl;
}
