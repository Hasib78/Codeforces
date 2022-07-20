#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a[100000];
    cin>>n;
    int count=1;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=a[i-1])
        {
            count++;
        }
    }
    cout<<count<<endl;

}
