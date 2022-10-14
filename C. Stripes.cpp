#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;

    cin>>t;
    while(t--)
    {
        int r=0,b=0;
        char ar[10][10];

        cout<<"\n";

        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                cin>>ar[i][j];
            }
        }
        for(i=0; i<8; i++)
        {
            r=0;
            for(j=0; j<8; j++)
            {
                if(ar[i][j]=='R')
                {
                    r++;
                }
            }
            if(r==8)
            {
                cout<<"R"<<endl;
                break;
            }

        }

        for(i=0; i<8; i++)
        {
            b=0;
            for(j=0; j<8; j++)
            {
                if(ar[j][i]=='B')
                {
                    b++;
                }
            }
            if(b==8)
            {
                cout<<"B"<<endl;
                break;
            }

        }





    }


}
