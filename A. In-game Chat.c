#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int n,b,i,j,c,count=0,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);

        scanf("%s",&a);
        c=strlen(a);

        for(j=c-1;j>=0;j--)
        {
            if(a[j]==41)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        x=c-count;
        if(count>x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        count=0;
    }
}
