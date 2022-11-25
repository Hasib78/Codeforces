#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,max1,max2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n,0);

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        vector<int>arr1(arr);
        sort(arr.begin(),arr.end());

        max1=arr[n-1];
        max2=arr[n-2];

        for(i=0;i<n;i++)
        {
            if(arr1[i]!=max1)
            {
                x=arr1[i]-max1;
                cout<<x<<" ";
            }
            else{

                x=arr1[i]-max2;
                cout<<x<<" ";
            }
        }
        cout<<"\n";

    }
}
