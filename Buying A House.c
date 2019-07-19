#include<stdio.h>
int main(void)
{
    int m,n,k,i,d1=-200,d2=200,price;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
        scanf("%d",&price);
        if(i<m){
            if(price!=0&&price<=k) d1=i;
        }
        else{
            if(price!=0&&price<=k){
                d2=i;
                break;
            }
        }
    }
    m--;
    d1=m-d1;
    d2-=m;
    if(d1<d2) printf("%d\n",d1*10);
    else printf("%d\n",d2*10);
    return 0;
}
