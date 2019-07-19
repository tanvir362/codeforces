#include<iostream>
#include<string.h>
#include<map>
using namespace std;
map <string , int> mp;
map <string , int> :: iterator it;
int main(void)
{
    char str[105],togram[3];
    string s;
    int len,i,mx=0;
    cin>>len;
    cin>>str;
    for(i=0;i<len-1;i++){
        togram[0]=str[i];
        togram[1]=str[i+1];
        togram[2]='\0';
        mp[togram]++;
    }
    for(it = mp.begin();it!=mp.end();it++){
        if(mx < (it->second)  ){
            mx = it->second;
            s = it->first;
        }
    }
    cout<<s<<endl;
    return 0;
}
