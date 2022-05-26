#include<stdio.h>
int main()
{
    int a,b,c[100],i,j,k,sum=0,count=0;
    scanf("%d %d",&a,&b);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&c[i]);

    }
    if(c[b]>0)
    {

        for(j=1; j<=a; j++)
        {
            if(c[j]>=c[b])
            {
                count++;
            }

        }
        printf("%d\n",count);

    }
    else
    {
        for(k=1;k<=a;k++)
        {
            if(c[k]>0)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }

}
