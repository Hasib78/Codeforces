#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,i,j;
    int n,x=-1,y=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(c<a)
        {
            printf("%d %d\n",x,y);
        }
        else if(c>a)
        {
            if(a*b==c)
            {
                printf("%d %d\n",y,x);
            }
            else
            {
                if(a*b>c)
                {

                printf("%d %lld\n",y,b);
                }
                else
                {
                    printf("%d %d\n",y,x);
                }
            }

        }
        else
        {
             printf("%d %lld\n",x,b);
        }
    }
    return 0;
}
