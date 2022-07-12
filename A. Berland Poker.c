#include<stdio.h>
int main()
{
    int a,c,d,e,f,n,m,k,i,x;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        c=n/k;
        if(m==0)
        {
            printf("0\n");
        }
        else if(m<=c)
        {
            printf("%d\n",m);
        }
        else if(m>c)
        {
            d=m-c;
            x=d%(k-1);
            if(x==0)
            {
                e=d/(k-1);
                f=c-e;
                printf("%d\n",f);
            }
            else
            {
                e=(d/(k-1))+1;
                f=c-e;
                printf("%d\n",f);
            }


        }
    }
    return 0;
}
