#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int c,d,i,j,k;
    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        scanf("%s",b);
        d=strlen(b);

        if(d==2)
        {
            printf("%s\n",b);
        }
        else
        {

            a[0]=b[0];
            a[1]=b[1];

            k=2;

            for(j=2; j<d; j++)
            {
                if(j%2!=0)
                {

                    a[k]=b[j];

                    k++;
                }

            }
            if(j==d)
            {
                a[k]=b[j];
            }
            printf("%s\n",a);
        }
    }
    return 0;
}
