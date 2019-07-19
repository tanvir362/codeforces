// A. Tom Riddle's Diary
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[100][101];
    int i,j,n,f;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        gets(name[i]);
        f=0;
        for(j=0;j<i;j++){
            if(strcmp(name[j],name[i])==0){
                f=1;
                printf("YES\n");
                break;
            }
        }
        if(f==0) printf("NO\n");
    }
    return 0;
}
