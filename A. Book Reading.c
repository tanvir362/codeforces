#include <stdio.h>
int main() {

    int m,n,s=0,p,i;
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++){
            scanf("%d",&p);
            p=86400-p;
            s+=p;
            if(s>=n){
                printf("%d\n",i+1);
                break;
            }
        }
    return 0;
}

