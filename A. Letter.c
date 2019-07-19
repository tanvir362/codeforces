#include<stdio.h>
int main(void)
{
    int m,n,i,j,iu=-1,id=-1,jl=100,jr=-1;
    char graph[50][51],ch;
    scanf("%d %d ",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<=m;j++){
            scanf("%c",&ch);
            if(ch=='\n') break;
            graph[i][j]=ch;
            if(ch=='*'){
                if(iu==-1) iu=i;
                if(j<jl) jl=j;
                if(j>jr) jr=j;
                if(i>id) id=i;
            }

        }
    }
    for(i=iu;i<=id;i++){
        for(j=jl;j<=jr;j++) printf("%c",graph[i][j]);
        printf("\n");
    }
    return 0;
}
