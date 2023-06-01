#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int arr[t];
    int count=0,odd=0, sum=0;
    for(i=0;i<t;i++)
    {
        cin>>arr[i];

        if(arr[i]%2==0)
        {
            count++;
        }
        else{
            odd++;
        }
        sum=sum+arr[i];

    }
    if(sum%2==0)
    {
        cout<<count<<endl;
    }
    else{
        cout<<odd<<endl;
    }
}
