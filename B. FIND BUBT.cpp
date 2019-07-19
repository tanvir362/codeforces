#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,i,c,l;
    char str[1005];
    scanf("%d ",&t);
    while(t--){
        c=0;
        gets(str);
        l=strlen(str);
        for(i=0;(i+3)<l;i++){
            if(str[i]=='B'&&str[i+1]=='U'&&str[i+2]=='B'&&str[i+3]=='T') c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
