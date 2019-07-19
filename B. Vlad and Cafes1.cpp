#include<iostream>
using namespace std;int f[200002],a[200002];int main(void){int n,i,m=-1,p;cin>>n;for(i=0;i<n;i++){cin>>a[i];f[a[i]]=n-i;}for(i=0;i<n;i++)if(f[a[i]]>m){m=f[a[i]];p=a[i];}cout<<p<<endl;return 0;}

