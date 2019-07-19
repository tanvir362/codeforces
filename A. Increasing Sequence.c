#include<stdio.h>
int main(void)
{
    int n,d,a,p,i,mv,count=0,df,in;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0){
            p=a;
        }
        else if(a>p){
            p=a;
        }
        else if(a<=p){
            df=p-a;
            in=df/d;
            mv=(in+1);
            count+=mv;
            p=a+d*mv;
        }
    }
    printf("%d\n",count);
    return 0;
}
