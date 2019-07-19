#include<iostream>
using namespace std;
long long abss(long long n)
{
    if(n<0) return -n;
    return n;
}
int main()
{
    long long q,n,k,a,b,h,l,i;
    cin>>q;
    while(q--){
        h=-1;
        l=1000000000;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a;
            if(a>h) h =a;
            if(a<l) l =a;
        }
        l+=k;
        if(abss(h-l)<=k) cout<<l<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
