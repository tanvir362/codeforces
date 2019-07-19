#include<stdio.h>
int main(void)
{
    char ch;
    int p=0,m=0,n;
    scanf("%d ",&n);
    while(scanf("%c",&ch)==1){
        if(ch=='+') p++;
        else if(ch=='-') m++;
    }
    p/=2;
    m/=2;
    printf("%d\n",p-m);
    return 0;
}
