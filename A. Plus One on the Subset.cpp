#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,b,c,i,j;
    int a[100000];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a[j];


        }
        sort(a,a+n);
        c = a[n-1]-a[0];
        cout<<c<<endl;


    }
}
