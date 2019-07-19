#include<stdio.h>
int main(void)
{
    int p[4],n,i,l,y=1,j;
    p[1]=1;
    p[2]=1;
    p[3]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l);
        if(p[l]==1){
            for(j=1;j<4;j++){
                if(p[j]==1&&j!=l){
                    p[j]=0;
                    l=j;
                    break;
                }
            }
            for(j=1;j<4;j++){
                if(p[j]==0&&j!=l){
                    p[j]=1;
                    break;
                }
            }
        }
        else{
            y=0;
            break;
        }
    }
    puts((y!=0)?"YES\n":"NO\n");
    return 0;
}
