#include<stdio.h>
int main(void)
{
    int n,i,p,mxpw;
    long long k;
    scanf("%d %I64d",&n,&k);
    int pwr[n];
    for(i=0;i<n;i++){
        scanf("%d",&pwr[i]);
        if(i==0){
            mxpw=pwr[i];
            p=i;
        }
        else if(pwr[i]>mxpw){
            if((i-p)>k){
                break;
            }
            else if((i-p)==k){
                if((pwr[p-1]<pwr[p])&&p!=0) break;
                else{
                    mxpw=pwr[i];
                    p=i;
                }
            }
            else{
                mxpw=pwr[i];
                p=i;
            }
        }
    }
    printf("%d\n",mxpw);
    return 0;
}
