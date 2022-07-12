#include<stdio.h>
int main()
{
    int n,a[100],b,c,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b=a[i]/10;
        if(b==0)
        {
            if(a[i]==1)
            {
                printf("1\n");
            }
            else
            {
            c=a[i]*10;
            printf("%d\n",c-9);
            }
        }
        else if(b>=100)
        {
            c=b/100;
            printf("%d\n",c*10);
        }
        else if(b<10)
        {
            c=(b*10)-7;
            printf("%d\n",c);
        }
        else
        {
            c=b/10;
            d=c*10;
            printf("%d\n",d-4);
        }
        b=0;
        c=0;
        d=0;

    }

}
