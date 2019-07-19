#include<stdio.h>
int main(void)
{
    int a,n,k,x,i,l,t=0;
    scanf("%d %d %d",&n,&k,&x);
    l=n-k;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i<l) t+=a;
        else t+=x;
    }
    printf("%d\n",t);
    return 0;
}
