#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i;
    cin>>n>>m;
    long long int arr[n+4];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    reverse(arr+1,arr+n+1);
    long long int ar[n+5];;

    for(i=1;i<=n;i++)
    {
        ar[i]=ar[i-1]+arr[i];
    }


    while(m--)
    {
        long long int x,y;
        cin>>x>>y;
        y=x-y;

        cout<<ar[x]-ar[y]<<endl;
    }
}
