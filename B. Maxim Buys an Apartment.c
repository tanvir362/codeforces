#include<stdio.h>
int main(void)
{
    int n,k,e,mx1=0,mx2=0,r,o;
    scanf("%d %d",&n,&k);
    if(k!=n && k>0) printf("1 ");
    else printf("0 ");
    while((n-k)>=3&&k>0){
        mx1+=2;
        n-=3;
        k--;
        //printf("\nn %d  k%d\n",n,k);
    }
    e=n/2;
    o=n-e;
    r=k-e;
    if(o>e){
        if(r<=0 && k!=0) mx2=k+1;
        else if(r>0) mx2=e+1-r;
        else mx2=0;

    }
    else{
        if(r==0) mx2=e;
        else if(r>0) mx2=e-r;
        else if(k!=0) mx2=k+1;
        else mx2=0;
    }
    printf("%d\n",mx1+mx2);
    return 0;
}
