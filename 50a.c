// Domino piling
#include<stdio.h>
int main(void)
{
    int m,n,t;
    scanf("%d %d",&m,&n);
    t=(m/2)*n;
    t+=(m%2)*(n/2);
    printf("%d\n",t);
    return 0;
}
