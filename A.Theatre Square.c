#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,a,b,c;
    int d;
    scanf("%lf %lf %lf",&n,&m,&a);
    b=ceil(n/a);
    c=ceil(m/a);
    d=b*c;
    printf("%d\n",d);

    return 0;

}
