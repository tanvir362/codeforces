#include<stdio.h>
#include<string.H>
int main(void)
{
    int i,l,f=0;
    char str1[12],str2[12];
    scanf("%s",str1);
    scanf("%s",str2);
    l=strlen(str1);
    printf("%c",str1[0]);
    for(i=1;i<l;i++){
        if(str1[i]>=str2[0]){
            printf("%c\n",str2[0]);
            f=1;
            break;
        }
        else printf("%c",str1[i]);
    }
    if(f==0) printf("%c\n",str2[0]);
    return 0;
}
