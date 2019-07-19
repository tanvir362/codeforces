#include<stdio.h>
int n,m;
int valid()
{
    char cr,cc,i,j,c1;
    for(i=0;i<n;i++){
        for(j=0;j<=m;j++){
            if(j==0){
                scanf("%c",&c1);
                if(i!=0&&c1==cr) return 0;
                cr=c1;
            }
            else{
               scanf("%c",&cc);
               if(cc=='\n') continue;
               if(cc!=c1) return 0;
               else cr=cc;
            }
        }
    }
    return 1;
}
int main(void)
{
    scanf("%d %d ",&n,&m);
    if(valid()||(n==1&&m==1)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
