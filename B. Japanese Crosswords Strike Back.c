#include<stdio.h>
int main(void)
{
    int n,x,a,i,blank,blocked=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        blocked+=a;
    }
    blank=x-blocked;
    if(blank==n-1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
