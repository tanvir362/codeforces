#include<stdio.h>
int main(void)
{
    int plane[5005],n,s,cnt,i,des,temp,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&plane[i]);
    i=1;
    plane[0]=0;
    while(n){
        s=i;
        des=plane[i];
        plane[i]=0;
        n--;
        cnt=1;
        while(plane[des]!=0){
            cnt++;
            temp=plane[des];
            plane[des]=0;
            des=temp;
            n--;
        }
        if(des==s&&cnt==3){
            f=1;
            break;
        }
        else while(plane[i]==0) i++;

    }
    if(f==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
