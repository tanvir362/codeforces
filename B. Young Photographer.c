#include<stdio.h>
int main(void)
{
    int n,x,a,b,i,ca,cb,temp1,temp2,f=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        temp1=(a<b)?a:b;
        temp2=(b>a)?b:a;
        a=temp1;
        b=temp2;
        if(i==0){
            ca=a;
            cb=b;
        }
        else{
            if(a>cb||b<ca){
                f=1;
                printf("-1\n");
                break;
            }
            else{
                ca=(ca>a)?ca:a;
                cb=(cb<b)?cb:b;
            }
        }
    }
    if(f!=1){
        if(x>=ca&&x<=cb) printf("0\n");
        else{
            printf("%d\n",(x<ca)?ca-x:x-cb);
        }
    }
    return 0;
}
