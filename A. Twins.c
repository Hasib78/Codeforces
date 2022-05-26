#include<stdio.h>
#include<math.h>
int main()
{
    int a,b[101],i,j,sum,temp,count,total,x;

    while(scanf("%d",&a)!=EOF)
    {

        sum=0,count=0,total=0;
        for(i=0; i<a; i++)
        {
            scanf("%d",&b[i]);
            sum=sum+b[i];

        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<a-1-i;j++)
            {
                if(b[j]<b[j+1])
                {
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;

                }

            }
        }
        x=sum/2;
        for(i=0;i<a;i++)
        {
            total=total+b[i];
            count++;
            if(total>x)
            {
                printf("%d\n",count);
                break;
            }
        }

    }
    return 0;
}
