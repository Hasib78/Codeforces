#include<stdio.h>
#include<string.h>

int main()
{
    char x[101],b[101];
    int c,d,l,j=0,k;
    scanf("%s",x);
    c=strlen(x);
    strlwr(x);
    for(l=0;l<c;l++)
    {

        if(x[l]!='a' && x[l]!='e' && x[l]!='i' && x[l]!='o' && x[l]!='u' && x[l]!= 'y')
        {
           b[j]=x[l];
           j++;
        }

    }

    for(k=0;k<j;k++)
    {
        printf(".%c",b[k]);
    }
    printf("\n");

}
