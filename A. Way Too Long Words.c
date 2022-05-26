#include<stdio.h>
int main()
{
    int a,c,k,i,count;
    char b[101];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%s",b);
        k=0,count=0;
        while(b[k]!='\0')
        {
            count++;
            k++;

        }
        if(count<=10)
        {
            printf("%s\n",b);
        }
        else
        {
            c=count-2;
            printf("%c%d%c\n",b[0],c,b[count-1]);

        }
    }
    return 0;
}
