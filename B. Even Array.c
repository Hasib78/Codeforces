#include<stdio.h>
int main()
{
    int a[100];
    int b,c,d,i,j,count,even,even1;

    scanf("%d",&d);
    for(j=0; j<d; j++)
    {

        count=0,even=0,even1=0;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {

            scanf("%d",&a[i]);
            if(i%2!=a[i]%2)
            {
                count++;
                if(i%2==0)
                {
                    even++;
                }
                if(a[i]%2==0)
                {
                    even1++;
                }
            }
        }
        if(count==0)
        {
            printf("%d\n",count);
        }
        else if(count==1)
        {
            printf("-1\n");
        }
        else if(count>1)
        {
            if(even==even1)
            {
                if(count%2==0)
                {

                    c=count/2;
                    printf("%d\n",c);
                }


                else
                {
                    c=(count/2)+1;
                    printf("%d\n",c);
                }
            }

            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
