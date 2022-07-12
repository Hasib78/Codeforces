#include<stdio.h>
int main()
{
    long long int a,b,c,y,d,t,n,m,x,i,j;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld%lld",&n,&m,&x);
        a=x/n;
        b=x%n;
        if(b==0)
        {
            y=a;
            c=(n-1)*m;
            d=y+c;
            printf("%lld\n",d);
        }
        else
        {
            y=a+1;
            if(b==1)
            {
                printf("%lld\n",y);
            }
            else
            {

                c=(b-1)*m;
                d=y+c;
                printf("%lld\n",d);

            }
        }

    }
}
