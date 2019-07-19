#include<iostream>
using namespace std;
int main(){

int i,k=0; string f,l,a; cin>>f>>l; a[0] = f[0];
for(i=1;i<f.length();i++) {
if(f[i] < l[0]) {
//cout<<"works";
 k++; a[k] = f[i];
}
else { //flag = 1;
break;
}
} k++; a[k] = l[0]; for(i=0;i<=k;i++) cout<<a[i];
}
