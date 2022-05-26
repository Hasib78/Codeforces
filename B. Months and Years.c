#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1000],i,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==30)
        {
            x++;
            y=0;
            z=0;
            if(x>=2)
            {
                printf("No\n");
                exit(1);
            }
        }
        else if(a[i]==31)
        {
            y++;
            z=0;
            x=0;
            if(y>=3)
            {
                printf("No\n");
                exit(1);
            }
        }
        else if(a[i]==28 || a[i]==29)
        {
            z++;
            x=0;
            y=0;
            if(z>=2)
            {
                printf("No\n");
                exit(1);
            }
            else if(i==0)
            {
                if(a[i+1]!=31)
                {
                    printf("No\n");
                    exit(1);
                }

            }

            else if(i==(n-1))
            {
                if(a[i-1]!=31)
                {

                    printf("No\n");
                    exit(1);
                }
            }
            else if(i>0)
            {
                if(a[i-1]!=31 || a[i+1]!=31)
                {

                    printf("No\n");
                    exit(1);
                }
            }
        }
    }
    printf("Yes\n");
}
