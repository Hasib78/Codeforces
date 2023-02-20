#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;

    cin>>t;

    while(t--)
    {
        cin>>n;

        cout<<(n+1)/2<<endl;

        for(i=2,j=3*n;i<j;i+=3,j-=3)
        {
            cout<<i<<" "<<j<<endl;
        }


    }
}
