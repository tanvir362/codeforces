#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char name[101],ln;
int sbcnt(char str2[8])
{
    int i,j,nmbr=0,cnt,ln2;
    ln2=strlen(str2);
    for(i=0;i<ln-ln2+1;){
        cnt=0;
        for(j=0;j<ln2;j++){
            if(str2[j]==name[i+j]){
                cnt++;
            }
        }
        if(cnt == ln2){
            nmbr++;
            i+=cnt;
        }
        else i++;
    }
    return nmbr;
}
int main(void)
{
    int cnt,i;
    gets(name);
    ln=strlen(name);
    cnt=sbcnt("Danil");
    cnt+=sbcnt("Olya");
    cnt+=sbcnt("Slava");
    cnt+=sbcnt("Ann");
    cnt+=sbcnt("Nikita");
    if(cnt==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
