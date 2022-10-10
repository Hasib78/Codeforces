#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a,b;

    cin>>n;
    int arr[n],brr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(i=0; i<n; i++)
    {
        if(brr[i]==arr[0])
        {
            a=i;
            break;
        }

    }
    for(i=0; i<n; i++)
    {
        if(brr[i]==arr[n-1])
        {
            if(a<i)
            {
                b=n-1-i;
            }
            else
            {
                b=(n-1)-(i+1);
            }

        }

    }
    cout<<a+b<<endl;

}
