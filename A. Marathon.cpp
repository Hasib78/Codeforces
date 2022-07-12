#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a<b && a<c && a<d){
            cout<<'3'<<endl;
        }
        else if(a<b && a<c && a>d)
        {
            cout<<'2'<<endl;
        }
        else if(a<b && a>c && a>d)
        {
            cout<<'1'<<endl;
        }
         else if(a<b && a<d && a>c){
            cout<<'2'<<endl;
        }
        else if(a<d && a>b && a>c)
        {
            cout<<'1'<<endl;
        }
        else if(a<c && a<d && a>b)
        {
            cout<<'2'<<endl;
        }
        else if(a<c && a>b && a>d)
        {
            cout<<'1'<<endl;
        }
        else

        {
            cout<<'0'<<endl;
        }
    }
}
