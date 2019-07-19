#include<stdio.h>
int main()
{
    int n,cnt=0,sd=0;
    scanf("%d",&n);
    while(sd<9){
        if(n<10){
            sd++;
        }
        cnt++;
        n++;
        while(n%10==0) n/=10;
    }
    printf("%d\n",cnt);

    return 0;
}
