#include<stdio.h>
long long power(long long a, long long b, long long m)
{
    long long x;
    if(b==1) return a;
    if((b&1)==1) return (power(a,b-1,m)*a)%m;
    else{
        x=power(a,b/2,m);
        x = (x*x)%m;
        return x;
    }
}
int main(void)
{
    long long n,m,t;
    scanf("%I64d %I64d",&n,&m);
    printf("%I64d\n",power(n,m,1000000007));
    return 0;
}

