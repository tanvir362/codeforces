#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a!=c&&b!=d){
        printf("%d\n",2*(abs(a-c)+1)+2*(abs(b-d)+1));
    }
    else{
        if(a==c){
            a++;
        }
        else b++;
        printf("%d\n",2*(abs(a-c)+1)+2*(abs(b-d)+1));
    }
    return 0;
}
