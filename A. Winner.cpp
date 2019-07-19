#include<stdio.h>
#include<string>
#include<string.h>
#include<map>
#include<iterator>
#include<iostream>
using namespace std;
map < string , int > m;
map < string , int >::iterator it;
int main(void)
{
    char name[35],winner[35];
    int score,i,mx,n,f=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%s %d ",name,&score);
        //printf("%s %d\n",name,score);
        m[name]+=score;
        if(f==0){
            mx=score;
            f=1;
            strcpy(winner,name);
        }
        else{
            for(it = m.begin();it!=m.end();it++){
                cout<<"Name "<<it->first<<"   Score "<<it->second<<endl;
                if(it->second>m[winner]){
                    string temp[35];
                    //cout<<it->first<<endl;
                    //strcpy(winner,temp);
                }
            }
        }
    }
    //for(it = m.begin();it!=m.end();it++) cout<<it->first<<" "<<it->second<<endl;

    printf("%s\n",winner);
    return 0;
    /*
    3
    a 7
    a -6
    b 2

    5
    a 11
    b 5
    a -5
    b 5
    a 4
    */

}
