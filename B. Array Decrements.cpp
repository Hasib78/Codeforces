#include<bits/stdc++.h>
using namespace std;

void hasib(int m,int a[], int b[])
{
    int i,x,mx=0;;
    for(i=0; i<m; i++)
    {
        mx=max(mx,a[i]-b[i]);
    }
    for(i=0; i<m; i++)
    {
        a[i]=max(0,a[i]-mx);
        if(a[i]!=b[i])
        {
            cout<<"NO"<<endl;
            return;

        }



    }
    cout<<"YES"<<endl;

}



int main()
{
    int n,m,i,j;
    int a[100000],b[100000],c[100000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        int count=0,d=0,e;
        for(j=0; j<m; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<m; j++)
        {
            cin>>b[j];
        }
        hasib(m,a,b);

    }
}
