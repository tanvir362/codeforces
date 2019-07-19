// B. Worms
#include<stdio.h>
int main(void)
{
    int n,m,arr[100002],a,i,j,s,e,mid;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i>0){
            scanf("%d",&a);
            arr[i]=arr[i-1]+a;
        }
        else scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&a);
        s=0;
        e=n-1;
        while(s<=e){
            mid=(s+e)/2;
            if(mid!=0){
                if(arr[mid-1]<a&&a<=arr[mid]){
                printf("%d\n",mid+1);
                break;
                }
                else if(arr[mid]<a) s=mid+1;
                else if(a<=arr[mid-1]) e=mid-1;
            }
            else{
                if(a<=arr[mid]){
                    printf("%d\n",mid+1);
                    break;
                }
                else s=mid+1;
            }
        }
    }
    return 0;
}
