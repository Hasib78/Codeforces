#include<stdio.h>
int main()
{
    long long int t,n,a,b,c,i,j;
    long long int x[1000];
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);

        for(j=0; j<n; j++)
        {
            scanf("%lld",&x[j]);
        }
        for(j=0; j<n-1; j++)
        {
            if(x[j]!=x[j+1])
            {
                if(x[j+1]==x[j+2])
                {
                    a=j+1;
                    break;
                }
                else
                {
                    a=j+2;
                    break;
                }

            }
        }
        printf("%lld\n",a);

    }
    return 0;
}
