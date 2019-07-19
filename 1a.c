// Theatre Square

#include<stdio.h>
#include<string.h>
int main(void)
{
    long long l,w,a,r,c;
    scanf("%I64d %I64d %I64d",&l,&w,&a);
    if(l%a!=0){
        l+=a-(l%a);
    }
    if(w%a!=0){
        w+=a-(l%a);
    }
    c=l/a;
    r=w/a;
    printf("%I64d\n",r*c);
    return 0;
}
