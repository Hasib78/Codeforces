#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a;

    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr;

        for(i=9;i>=1,n>0;i--)
        {
            if(i<=n)
            {
                n=n-i;
                arr.push_back(i);
            }
            else{
               arr.push_back(n);
               break;
            }

        }
        a=arr.size();
        for(i=a-1;i>=0;i--)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
}
