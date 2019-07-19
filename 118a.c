// String Task
#include<stdio.h>
int main(void)
{
    int i;
    char ch;
    while(scanf("%c",&ch)==1){
        if(ch!='A'&&ch!='a'&&ch!='O'&&ch!='o'&&ch!='Y'&&ch!='y'&&ch!='E'&&ch!='e'&&ch!='U'&&ch!='u'&&ch!='I'&&ch!='i'&&ch!='\n'){
            if(ch>='B'&&ch<='Z') ch+=32;
            printf(".%c",ch);
        }
    }
    printf("\n");
    return 0;
}
