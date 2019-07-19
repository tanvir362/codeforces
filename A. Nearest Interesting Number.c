#include<stdio.h>
long long isInteristing(long long n)
{
    long long sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    if(sum%4 == 0) return 1;
    return 0;
}
int main()
{
    int a;
    long long i;
    scanf("%d",&a);
    for(i=a;;i++){
        if(isInteristing(i)){
            printf("%I64d\n",i);
            break;
        }
    }
    return 0;
}
