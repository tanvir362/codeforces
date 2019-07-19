#include<stdio.h>
#include<string.h>
int isvwl(int ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 1;
    return 0;
}
int isodddgt(char d)
{
    int n;
    if(d<'a') n=d-48;
    else return 0;
    if(n%2!=0) return 1;
    return 0;
}
int main(void)
{
    char str[52];
    int l, count=0,i;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++){
        if(isvwl(str[i])==1) count++;
        else if(isodddgt(str[i])==1) count++;
    }
    printf("%d\n",count);
    return 0;
}
