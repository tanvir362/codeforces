#include<stdio.h>
#include<map>
#include<string>
using namespace std;
map<string, int> mp;
int main(void)
{
    int n,i,frq;
    char name[34];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        gets(name);
        mp[name]++;
        frq=mp[name];
        if(frq==1) printf("OK\n");
        else if(frq>1) printf("%s%d\n",name,frq-1);
    }
    return 0;
}
