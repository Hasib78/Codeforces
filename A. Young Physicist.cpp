#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,a,b,i,x,y,z;
    cin>>n;
    x=0,y=0,z=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0&&y==0&&z==0)
    {
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

}
