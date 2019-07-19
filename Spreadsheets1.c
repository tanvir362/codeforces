// sys1 R12
// sys2 R1C2
#include<stdio.h>
#include<string.h>
char coord[20];
void convertToSys1()
{
    // will work on sys2
    int r=0,c=0,p=10,i=1,v;
    while(coord[i]!='C'){
        r*=p;
        r+=(int)coord[i]-48;
        i++;
    }
    i++;
    while(coord[i]!='\0'){
        c*=p;
        c+=(int)coord[i]-48;
        i++;
    }
    i=19;
    while(c){
        v=c%26;
        if(v==0){
            v=26;
            c-=26;
        }
        coord[i]=64+v;
        c/=26;
        i--;
    }
    i++;
    while(i<20){
        printf("%c",coord[i]);
        i++;
    }
    printf("%d\n",r);

}
void convertToSys2()
{
    // will work on sys1
    int r,i=0,c=0;
    while(coord[i]>'9'){
        i++;
    }
    r=(int)coord[i]-48;
    coord[i]='\0';
    i++;
    while(coord[i]!='\0'){
        r*=10;
        r+=(int)coord[i]-48;
        i++;
    }
    i=0;
    while(coord[i]!='\0'){
        c*=26;
        c+=(int)coord[i]-64;
        i++;
    }
    printf("R%dC%d\n",r,c);
}
int main(void)
{
    int n,i,f;
    scanf("%d ",&n);
    while(n--){
        f=0;
        gets(coord);
        if(coord[0]=='R'&&(coord[1]>='0'&&coord[1]<='9')){
            // it may be sys2
           i=2;
           while(coord[i]!='\0'){
                if(coord[i]=='C'){
                    // coord is sys2
                    f=1;
                    break;
                }
                i++;
           }
        }
        if(f==1) convertToSys1();
        else convertToSys2();

    }
    return 0;
}
