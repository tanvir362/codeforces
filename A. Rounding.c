#include<stdio.h>
int main(void)
{
    long long n,r;
    scanf("%I64d",&n);
    r=n%10;
    if(r>5){
        r=10-r;
        n+=r;
    }
    else n-=r;
    printf("%I64d\n",n);
    return 0;
}
