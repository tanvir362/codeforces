#include<stdio.h>
#include<algorithm>
int main(void)
{
    int i,j,n,m,a[51],b[51],indx=0;
    long long mx[2505];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mx[indx] = a[i]*b[j];
            indx++;
        }
    }
    std::nsort(mx,mx+indx);
    printf("%I64d\n",mx[indx-2]);
    return 0;
}
