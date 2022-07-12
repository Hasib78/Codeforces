#include<stdio.h>
int main()
{
    int a,b,c,f,e,i,j;
    int d[1000];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);
        int count=0;
        for(j=0; j<b; j++)
        {
            scanf("%d",&d[j]);
            if(d[j]%2!=0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("No\n");
        }
        else if(count>c)
        {
            if(c%2!=0)
            {
                printf("Yes\n");
            }
            else
            {
                if(count==b)
                {
                    printf("No\n");
                }
                else
                {
                    printf("Yes\n");
                }
            }
        }
        else if(count<=c)
        {
            if(count%2!=0)
            {
                printf("Yes\n");
            }
            else
            {

                f=c-count;
                e=b-count;
                if(f<e)
                {

                    printf("Yes\n");
                }
                else if(f==e)
                {
                    printf("No\n");
                }
            }
        }




    }
    return 0;
}
