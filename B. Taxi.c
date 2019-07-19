#include<stdio.h>
int frq[5];
int main(void)
{
    int n,i,grp,txi=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&grp);
        frq[grp]++;
    }
    txi+=frq[4];
    txi+=frq[3];
    txi+=(frq[2]/2);
    frq[2]%=2;
    if(frq[1]>frq[3]){
        frq[1]-=frq[3];
    }
    else{
        frq[1]=0;
    }
    if(frq[2]>0){
        txi++;
        if(frq[1]>2) frq[1]-=2;
        else frq[1]=0;
    }
    txi+=(frq[1]/4);
    frq[1]%=4;
    if(frq[1]>0) txi++;
    printf("%d\n",txi);
    return 0;
}
