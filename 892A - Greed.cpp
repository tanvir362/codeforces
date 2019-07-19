#include<stdio.h>
#include<algorithm>
main(){int n,i;long long s=0,a;scanf("%d",&n);long long b[n];for(i=0;i<n;i++){scanf("%I64d",&a);s+=a;}for(i=0;i<n;i++){scanf("%I64d",&b[i]);}std::sort(b,b+n);printf("%s\n",(s>b[n-1]+b[n-2])?"NO":"YES");return 0;}
