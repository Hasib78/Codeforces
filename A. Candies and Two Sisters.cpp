#include<bits/stdc++.h>
using namespace std;

int calculate(int n)
{
    int a;
    a=n/2;
    if(n>2 && n%2==0)
    {
        return a-1;

    }
    else if(n>2 && n%2!=0)
    {
        return a;

    }
    return 0;

}


int main()
{
    int t,n,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=calculate(n);
        cout<<c<<endl;
    }


}
