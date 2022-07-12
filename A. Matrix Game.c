#include<stdio.h>
int main()
{
    int a,b,c,x,y,i,j,k,l,m,n,z,col,row;
    int d[60][60];
    scanf("%d",&a);


    for(i=0; i<a; i++)
    {
        col=0,row=0;
        scanf("%d %d",&b,&c);

        for(j=0; j<b; j++)
        {

            for(k=0; k<c; k++)
            {
                scanf("%d",&d[j][k]);

            }
        }

        for(n=0; n<b; n++)
        {

            for(l=0; l<c; l++)
            {
                if(d[n][l]==1)
                {
                    row++;
                    break;
                }
            }
        }

        for(z=0; z<c; z++)
        {

            for(m=0; m<b; m++)
            {
                if(d[m][z]==1)
                {
                    col++;
                    break;
                }
            }
        }



        x=b-row;
        y=c-col;
        if(x<y)
        {

            if(x%2==0)
            {
                printf("Vivek\n");
            }

            else
            {
                printf("Ashish\n");
            }
        }
        else
        {
            if(y%2==0)
            {
                printf("Vivek\n");
            }

            else
            {
                printf("Ashish\n");
            }
        }
    }



    return 0;


}



