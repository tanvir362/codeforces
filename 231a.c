// Team
#include<stdio.h>
int main(void)
{
    int p,n,c,i,count=0;
    scanf("%d",&p);
    while(p--){
        c=0;
        for(i=0;i<3;i++){
            scanf("%d",&n);
            if(n==1) c++;
        }
        if(c>=2) count++;
    }
    printf("%d\n",count);
    return 0;
}
