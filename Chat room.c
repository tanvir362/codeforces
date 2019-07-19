#include<stdio.h>
int main(void)
{
    char hello[]="hello",ch;
    int i=0;
    while(scanf("%c",&ch)==1){
        if(ch==hello[i]) i++;
        if(i==5){
            break;
        }
    }
    if(i==5) printf("YES\n");
    else printf("NO\n");
    return 0;

}
