#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<set>
using namespace std;
set <string> st[27];
//set <int> st[27];
int main(void)
{
    int n,i,val,len,j,frq[130],f;
    char word[1003];
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%s",word);
        len=strlen(word);
        if(len<=26){
            val = 0;
            f=0;
            for(j=97;j<126;j++) frq[j]=0;
            for(j=0;j<len;j++){
                frq[word[j]]++;
                //val = val^(word[j]%96);
            }
            for(j=97;j<126;j++){
                if(frq[j]>1) f=1;
            }
            if(f==0){
                sort(word,word+len);
                st[len].insert(word);
                //st[len].insert(val);
                //cout<<word<<endl;
            }
        }
    }
    val = 0;
    for(i=1;i<=26;i++){
        val+=st[i].size();
    }
    cout<<val<<endl;
    return 0;
}
