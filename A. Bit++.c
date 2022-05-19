#include<stdio.h>
int main()
{
    int a,X=0,i,j=1;
    char b[500];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",b);

        if(b[1]==43)
        {
            X++;
        }
        else if(b[1]==45)
        {
            X--;
        }



    }
    printf("%d\n",X);

    return 0;

}
