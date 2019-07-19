// Next Round

#include<stdio.h>
int main(void)
{
    int n,k,arr[52],i,cnt;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cnt=0;
    for(i=0;i<n;i++){
        if(arr[i]>=arr[k-1]&&arr[i]>0) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

