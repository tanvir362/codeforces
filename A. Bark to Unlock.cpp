//A. Bark to Unlock
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    int n,i,f=0;
    char mstr[3],stor[100][3];
    cin>>mstr;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>stor[i];
        if(strcmp(mstr,stor[i])==0){
            f=1;
            break;
        }
        else if(mstr[0]==stor[i][1]) f=2;

    }
    if(f==2){
        f=0;
        for(i=0;i<n;i++){
            if(mstr[1]==stor[i][0]){
                f=1;
                break;
            }
        }
    }
    if(f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}
