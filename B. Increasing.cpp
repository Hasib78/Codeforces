#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;


    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }

        }

        if (i == j)
            res++;
    }
    return res;
}





int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        int f=countDistinct(ar, n);

        if(f==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
