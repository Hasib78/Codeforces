#include<bits/stdc++.h>
using namespace std;

void calculate(int a[],int n)
{
    int i,j;
    sort(a,a+n);


    for(i=0; i<n-2; i++)
    {
        if(a[i]==a[i+1] && a[i]==a[i+2])
        {
            cout<<a[i]<<endl;
            break;
        }


    }
    if(i==n-2)
    {

        cout<<"-1"<<endl;
    }


}
int main()
{
    int t,n,i;
    int a[200000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        if(n<3)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            calculate(a,n);
        }

    }
}
