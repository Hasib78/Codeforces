#include<bits/stdc++.h>
using namespace std;

int countDistinct(string s, int n)
{
    int res = 1,j;

    for (int i = 0; i <n-1; i++)
    {

        for (j = i+1; j <n; j++)
        {
            if (s[i] == s[j])
                break;

        }

        if (j==n)
        {
            res++;

        }

    }
    return res;
}

int main()
{
    int t,n,i,num,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
       num=countDistinct(s,n);
       a=n-num;
       b=num*2+1*a;
       cout<<b<<endl;
    }

    return 0;
}
