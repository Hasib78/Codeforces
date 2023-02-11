#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,m1,x,y;


    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>m;
        cin>>s2>>m1;

        while(s1[s1.size()-1]=='0')
        {
            s1.pop_back();
            m++;
        }

        while(s2[s2.size()-1]=='0')
        {
            s2.pop_back();
            m1++;
        }



        if(s1==s2)
        {
            if(m>m1)
            {
                cout<<">"<<endl;
            }
            else if(m<m1)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
        }
        else
        {

            x=s1.size()+m;
            y=s2.size()+m1;

            if(x==y)
            {
                if(s1>s2)
                {
                    cout<<">"<<endl;
                }
                else if(s1<s2)
                {
                    cout<<"<"<<endl;
                }
            }
            else
            {
                if(x>y)
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
        }

    }
}
