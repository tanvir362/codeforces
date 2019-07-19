#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
vector <string > numbers[21];
char frinds[21][12];
int nof=0;
int isnewfrnd(char frnd[])
{
    int i;
    for(i=1;i<=nof;i++){
        if(strcmp(frinds[i],frnd)==0) return i;
    }
    return 0;
}
int cmpr(char num1[], char num2)
{
    int len1,len2,i,j;
    len1=strlen(num1);
    len2=strlen(num2);
    for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--){
        if(num1[i]!=num2[j]) return 1;
    }

}
int isvalidno(int id,char numbr[])
{
    int i;
    for(i=0;i<numbers[id].size();i++){
        if(cmpr(numbers[id][i],numbr)==0) return 0
    }
    return 1;
}
int main(void)
{
    int t,nn,cfid,i;
    char frnd[12],numbr[12];
    scanf("%d ",&t);
    while(t--){
        scanf("%s",frnd);
        //printf("%s\n",frnd);
        cfid=isnewfrnd(frnd);
        if(cfid==0){
            nof++;
            strcpy(frinds[nof],frnd);
            cfid=nof;
        }
        scanf("%d",&nn);
        //printf("%d\n",nn);
        while(nn--){
            scanf("%s",numbr);
            isvalidno(cfid,numbr);
            //printf("%s\n",numbr);
        }

        for(i=1;i<=nof;i++){
            printf("%s\n",frinds[i]);
        }
    }
    return 0;
}
