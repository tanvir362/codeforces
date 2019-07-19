#include<stdio.h>
#include<string.h>
int main(void)
{
    int len,i;
    char str[1005];
    gets(str);
    printf("%st",str);
    len = strlen(str);
    for(i=len-1;i>=0;i--) printf("%c",str[i]);
    printf("\n");
    return 0;
}
