//Way Too Long Words

#include<stdio.h>
#include<string.h>
int main(void)
{
    int ln,t;
    char str[105];
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        ln=strlen(str);
        if(ln>10) printf("%c%d%c\n",str[0],ln-2,str[ln-1]);
        else printf("%s\n",str);
    }
    return 0;
}
