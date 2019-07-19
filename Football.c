#include<stdio.h>
int main(void)
{
    int f,count,dangerous=0;
    char n,p;
    f=1;
    while(scanf("%c",&n)==1){
        if(f==1){
            p=n;
            f=0;
            count=1;
        }
        else{
            if(n==p) count++;
            else{
                p=n;
                count=1;
            }
        }
        if(count==7){
            dangerous=1;
            break;
        }
    }
    if(dangerous==1) printf("YES\n");
    else printf("NO");
    return 0;
}
