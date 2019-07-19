#include<stdio.h>
int main(void)
{
    int n,k,i,cnt,j;
    scanf("%d %d",&n,&k);
    long long pwr[n];
    for(i=0;i<n;i++){
        scanf("%I64d",&pwr[i]);
    }
    if(0) printf("%I64d\n",(pwr[0]>pwr[1])?pwr[0]:pwr[1]);
    else{
        for(i=0;i<n;){
            cnt=0;
            for(j=1;j<=k&&(i+k<n);j++){
                if(pwr[i]>pwr[i+j]){
                    cnt++;
                }
                else{
                    i=i+j;
                    break;
                }
            }
            if(cnt==k){
                printf("1st %I64d\n",pwr[i]);
                break;
            }
            else if(i==n-1){
                printf("2nd %I64d\n",pwr[i]);
            }
        }
    }
    return 0;
}
