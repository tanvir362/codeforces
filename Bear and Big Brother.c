#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,n;
    int y;
    scanf("%lf %lf",&a,&b);
    n = (log(b/a))/(log(3.0/2.0));
    y = (int)n;
    n-=y;
    y++;
    printf("%d\n",y);
    return 0;
}
