#include<stdio.h>
#include<string.h>
char coord[20];
void coord_sys1()
{
    /*int i=1,r=0,c=0,p=10;
    while(coord[i]!='C'){
        r*=p;
        r+=coord[i];
        i++;
    }
    i++;
    while(coord[i]!='\0'){
        c*=p;
        c+=coord[i];
        i++;
    }*/
    printf("sys1\n");
}
void coord_sys2()
{
    printf("sys2\n");
}
int main(void)
{
    int n,i,f;
    scanf("%d ",&n);
    while(n--){
        f=1;
        gets(coord);
        if(coord[0]=='R'&&(coord[1]>='0'&&coord[1]<='9')){
           i=2;
           while(coord[i]!='\0'){
                if(coord[i]>='A'&&coord[i]<='Z'){
                    f=0;
                    break;
                }
           }
            if(f==1) coord_sys1();
            else coord_sys2();
        }
        else coord_sys2();

    }
    return 0;
}
