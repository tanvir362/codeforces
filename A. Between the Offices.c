#include<stdio.h>
int main(void)
{
    int n,i,yes=0,no=0;
    char p,r,ch;
    scanf("%d ",&n);
    //gets(str);
    for(i=0;i<n;i++){
        scanf("%c",&ch);
        if(i==0) p=ch;
        else if(ch!=p){
            if(p=='S') yes++;
            else if(p=='F') no++;
            p=ch;
        }
    }
    //printf("yes %d   no %d\n",yes,no);
    printf("%s\n",(yes>no)?"YES":"NO");
    return 0;
}
