#include<stdio.h>
int main(void)
{
    int n,r,min,max;
    scanf("%d",&n);
    r=n/7;
    min = 2*r;
    max = 2*r;
    n%=7;
    if(n>=2&&n<=6) max+=2;
    else if(n==1) max++;
    if(n==6) min++;
    printf("%d %d\n",min,max);
    return 0;
}
