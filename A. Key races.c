#include<stdio.h>
int main(void)
{
    long long s,v1,v2,t1,t2,p1,p2;
    scanf("%I64d %I64d %I64d %I64d %I64d",&s,&v1,&v2,&t1,&t2);
    p1=v1*s+2*t1;
    p2=v2*s+2*t2;
    //printf("p1 %I64d  p2 %I64d\n",p1,p2);
    if(p1<p2) printf("First\n");
    else if(p2<p1) printf("Second\n");
    else printf("Friendship\n");
    return 0;
}
