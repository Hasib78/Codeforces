#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,c,r,x,y,z,i,j;
    double k,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        k=sqrt(n);
        a=k;
        b=k-a;
        if(b==0)
        {
            r=k;
            c=1;
            cout<<r<<" "<<c<<endl;

        }
        else if(b>=0.5)
        {
            r=round(k);
            x=r*r;
            c=(x-n)+1;
            cout<<r<<" "<<c<<endl;


        }

        else{
            c=ceil(sqrt(n));
            x=c*c;
            y=(c-1)*2;
            z=x-y;
            r=(n-z)+1;
            cout<<r<<" "<<c<<endl;



        }




    }
}
