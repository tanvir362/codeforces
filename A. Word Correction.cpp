#include<stdio.h>
int notvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 0;
    return 1;
}
int main(void)
{
    char str[105];
    int n,i;
    scanf("%d ",&n);
    scanf("%s",str);
    for(i=0;i<n;i++){
        if(notvowel(str[i])) printf("%c",str[i]);
        else{
            if(notvowel(str[i+1])) printf("%c",str[i+1]);
        }
    }
    return 0;
}
