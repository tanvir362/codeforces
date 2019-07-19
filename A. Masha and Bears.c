#include<stdio.h>
int main(void)
{
    int d,D,c,C,b,B,a,A,i,f=0,l,pb;
    scanf("%d %d %d %d",&d,&c,&b,&a);
    D=2*d;C=2*c;B=2*b;A=2*a;
    l=A-a;pb=b;
    for(b=a,i=0;i<=l;i++){
        if(b>B){
            f=1;
            break;
        }
        if(b<pb) b++;
        if(b>c) c++;
        if(c>C){
            f=1;
            break;
        }
        if(c>d) d++;
        if(d>D){
            f=1;
            break;
        }
    }
    if(f==0) printf("%d\n%d\n%d\n",d,c,b);
    else printf("-1\n");
    return 0;
}
