#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;
    long long int x[1000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>x[j];
        }
        if(x[0]>x[2] && x[0]>x[3] && x[1]>x[3] && x[1]>x[2])
        {
            cout<<"NO"<<endl;
        }
        else if(x[2]>x[0] && x[2]>x[1] && x[3]>x[0] && x[3]>x[1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
