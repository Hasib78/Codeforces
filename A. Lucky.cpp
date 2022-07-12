#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j;
    string str;
    cin>>a;

    for(i=0;i<a;i++)
    {
        cin>>str;
        int x=0,y=0;
        for(j=0;j<3;j++)
        {
            x=x+str[j];
        }
        for(j=5;j>2;j--)
        {
            y=y+str[j];
        }
        if(x==y)
        {
            cout<<"YES"<<endl;

        }
        else

        {
            cout<<"NO"<<endl;
        }
    }





}
