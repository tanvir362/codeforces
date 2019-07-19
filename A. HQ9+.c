#include<stdio.h>
int main(void)
{
    int f=0;
    char ch;
    while(scanf("%c",&ch)==1){
        if(ch=='H'||ch=='Q'||ch=='9'){
            printf("YES\n");
            f=1;
            break;
        }
    }
    if(f==0) printf("NO\n");
    return 0;
}
