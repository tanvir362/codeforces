#include<stdio.h>
int main(void)
{
    int n,a,i,f,min,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0){
            min=a;
            p=i+1;
            f=1;
        }
        else if(a<min){
            min=a;
            p=i+1;
            f=1;
        }
        else if(a==min) f=0;
    }
    if(f==1) printf("%d\n",p);
    else printf("Still Rozdil\n");
    return 0;
}
