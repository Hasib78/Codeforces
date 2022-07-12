#include<bits/stdc++.h>
using namespace std;

int countd(int a[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                break;
        }

        if (i == j)
            res++;
    }
    return res;
}


int main()
{
    int a[100];
    int t,n,s,i,j;
    cin>>t;
    for(i=0; i<t; i++)
    {


        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a[j];

        }
        s=countd(a, n);
        if(n%2==0)
        {
            if(s%2==0)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<s-1<<endl;
            }

        }
        else
        {
            if(s%2!=0)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<s-1<<endl;
            }
        }
    }

}
