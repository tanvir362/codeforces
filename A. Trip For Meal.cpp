#include<iostream>
using namespace std;
int arr[3],n,p,d=0;
int min(int po)
{
    if(po==1){
        if(arr[0]<arr[1]){
            d+=arr[0];
            return 2;
        }
        else{
            d+=arr[1];
            return 3;
        }
    }
    else if(p==2){
        if(arr[0]<arr[2]){
            d+=arr[0];
            return 1;
        }
        else{
            d+=arr[2];
            return 3;
        }
    }
    else if(p==3){
        if(arr[1]<arr[2]){
            d+=arr[1];
            return 1;
        }
        else{
            d+=arr[2];
            return 2;
        }
    }
}
int main(void)
{
    int i;
    cin>>n;
    for(i=0;i<3;i++) cin>>arr[i];
    n--;
    p=1;
    while(n>0){
        p=min(p);
        n--;
    }
    cout<<d<<endl;
    return 0;
}
