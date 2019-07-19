#include<iostream>
using namespace std;
int main(void)
{
    long long T,n,s,t,w,m,st,d,ss,nn;
    cin>>T;
    while(T--){
        cin>>n>>s>>t;
        st = n-s;
        d = t-st;
        ss = s-d;
        m = ((ss+d)<=st)? (ss+d):st;
        nn = (ss <= (st+d))? ss :(st+d);
        m = (m>nn)? m : nn;
        if(st ==0 && ss == 0) w=1;
        else w = m+1;
        cout<<w<<endl;

    }
    return 0;
}
