#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
 return (a < b);
}

int main()
{
    int n,m,a,b,c,d,x,i,y,sum,z,e;
    cin>>n>>m>>a>>b;
    if(n<=m)
    {

        a*n<b?cout<<a*n<<endl:cout<<b<<endl;
    }
    else
    {
        sum=0;
        for(i=m; i<=n; i+=m)
        {
            sum=sum+b;
            c=i;
        }
        d=n-c;
        x=d*a;
        z=n*a;
        y=sum+b;
        sum=sum+x;
        e=std::min({sum,y,z},comp);
        cout<<e<<endl;

    }


}
