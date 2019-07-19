#include<stdio.h>
#include<string.h>
char str1[100002],str2[32];
int len1,len2;
int match(int s, int e)
{
    int i,j;
    if(e>=len1) return 0;
    for(i=s,j=0;i<=e;i++,j++){
        if(str1[i]!=str2[j]) return 0;
    }
    return 1;
}
int main(void)
{
    int i,j,count=0;
    gets(str1);
    len1=strlen(str1);
    gets(str2);
    len2=strlen(str2);
    for(i=0;i<len1;){
        j=i+len2-1;
        if(match(i,j)==1){
            count++;
            str1[j]='#';
            i=j+1;
        }
        else{
            i++;
        }
    }
    printf("%d\n",count);
    return 0;
}
