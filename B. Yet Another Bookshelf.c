#include<stdio.h>
int main()
{
    int n,a[200],b,i,j,k,count,sum;
    scanf("%d",&b);
    for(k=0; k<b; k++)
    {

        scanf("%d",&n);
        count=0;
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<n; j++)
        {
            if(a[j]==1)
            {
                for(i=j+1; i<n; i++)
                {
                    if(a[i]==0)
                    {
                        count++;
                        sum++;
                    }


                    if(i==(n-1))
                    {
                        if(a[i]==0)
                        {
                            count=count-sum;

                        }
                    }
                    else if(a[i]==1)
                    {
                        break;
                    }

                }

            }
            sum=0;
        }
        if(count==n || count==n-1)
        {
            printf("0\n");
        }
        else
        {

            printf("%d\n",count);

        }
    }

}
