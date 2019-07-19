#include<stdio.h>
int main(void)
{
    int k,n;
    scanf("%d",&k);
    if(k>36){
        printf("-1\n");
        return 0;
    }
    else{
        int i,r,q;
        r=k%2;
        q=k/2;
        for(i=0;i<q;i++) printf("8");
        for(i=0;i<r;i++) printf("4");
        printf("\n");
    }
    return 0;
}
