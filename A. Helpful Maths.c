#include<stdio.h>
int frq[4];
int main(void)
{
    int n,i,j,f=0;
    while(scanf("%d+",&n)==1){
        frq[n]++;
    }
    for(i=1;i<4;i++){
        for(j=0;j<frq[i];j++){
            if(f==0) f=1;
            else printf("+");
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}
