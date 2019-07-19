#include<stdio.h>
int main(void)
{
    int n,count=0,max=0,i=0;
    char ch;
    scanf("%d ",&n);
    do{
        i++;
        scanf("%c",&ch);
        if(ch==' '||i>n){
            if(count>max) max=count;
            count=0;
        }
        else if(ch>='A'&&ch<='Z') count++;
    }while(i<=n);
    printf("%d\n",max);
    return 0;
}
