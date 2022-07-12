#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,i,j,b[100];

    cin>>t;
    for(i=0;i<t;i++)
    {
        for(j=0;j<7;j++)
        {
            cin>>b[j];

        }
        x=b[6]-b[0]-b[1];
        cout<<b[0]<<" "<<b[1]<<" "<<x<<endl;
    }

}
