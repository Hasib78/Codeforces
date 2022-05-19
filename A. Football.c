#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[101];
    int i,j,count,sum;
    while(scanf("%s",a)!=EOF)
    {
        count=0,sum=0;


        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]==49)
            {
                count++;
                if(count>=7)
                {
                    printf("YES\n");
                    exit(0);
                }
                if(a[i-1]==48)
                {
                    sum=0;
                }

            }
            else if(a[i]==48)
            {
                sum++;
                if(sum>=7)
                {
                    printf("YES\n");
                    exit(0);
                }
                if(a[i-1]==49)
                {
                    count=0;
                }

            }

        }
        if(sum<7 && count<7)
        {
            printf("NO\n");
        }
    }
    return 0;

}

