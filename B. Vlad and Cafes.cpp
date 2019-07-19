#include<iostream>
#include<map>
#include<iterator>
using namespace std;
map <int , int > m;
map <int , int > :: iterator it;
int main(void)
{
    int n,ai,i,mx,mxi,f=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ai;
        m[ai]=n-i;
        mxi=ai;
    }
    for(it=m.begin();it!=m.end();it++){
        //cout<<"cafe indces "<<it->first<<"  last visited visiting "<<it->second<<endl;
        if(f==0){
            mx=it->second;
            mxi=it->first;
            f=1;
        }
        else if(it->second>mx){
            mx=it->second;
            mxi=it->first;
        }

    }
    cout<<mxi<<endl;
    return 0;
}
