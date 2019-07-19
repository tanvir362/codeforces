#include<stdio.h>
#include<algorithm>
int main(void)
{
    int arr[6],i,j,sum=0,s=0;
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    std::sort(arr,arr+6);
    if(sum%2!=0){
        printf("NO\n");
    }
    else{
        sum/=2;
        for(j=5;0<=j;j--){
            s+=arr[j];
            if(s>sum){
                s-=arr[j];
            }
        }
        if(s==sum) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
