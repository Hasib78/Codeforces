#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,q,r;
    int a[5];
    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    p=a[3]-a[0];
    q=a[1]-p;
    r=a[3]-p-q;

//    p=a[3]-a[0];
//    q=a[3]-a[1];
//
//    r=a[3]-a[2];


    cout<<p<<" "<<q<<" "<<r<<endl;
}
