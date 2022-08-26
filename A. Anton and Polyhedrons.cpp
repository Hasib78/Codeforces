#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>s;
        if(s=="Tetrahedron")
        {
             count+=4;
        }
        else if(s=="Cube")
        {
             count+=6;
        }
        else if(s=="Octahedron")
        {
             count+=8;
        }
        else if(s=="Dodecahedron")
        {
             count+=12;
        }
        else
        {
             count+=20;
        }
    }
    cout<<count<<endl;

}
