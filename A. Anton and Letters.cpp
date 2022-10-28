#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    getline(cin,s);
    int i,j,count=0;
    int l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s1=s1+s[i];
            count++;
        }

    }

    if(count==0)
    {
        cout<<'0'<<endl;

    }
    else
    {
        int r=1;
        for(i=0; i<count-1; i++)
        {
            for(j=i+1; j<count; j++)
            {
                if(s1[i]==s1[j])
                {
                    break;
                }
            }
            if(j==count)
            {
                r++;
            }
        }
        cout<<r<<endl;

    }


}

