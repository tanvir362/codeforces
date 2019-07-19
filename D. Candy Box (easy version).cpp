#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
set<int>st;
int main()
{
    int q,n,a,cnt;
    cin>>q;
    while(q--){
        cnt=0;
        cin>>n;
        while(n--){
            cin>>a;
            mp[a]++;
        }
        //sort(&mp,&mp+mp.size());
        for(it = mp.begin();it!=mp.end();it++){
            //cout<<it->first<<"  "<<it->second<<endl;
          lvl:  if(st.find(it->second)==st.end()){
                st.insert(it->second);
                cnt += it->second;
                //cout<<cnt<<endl;
            }
            else{
                it->second--;
                if(it->second != 0) goto lvl;
            }

        }
        cout<<cnt<<endl;
        mp.clear();
        st.clear();
    }
    return 0;
}
