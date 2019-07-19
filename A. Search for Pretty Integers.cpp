#include<iostream>
#include<algorithm>
using namespace std;
int duplicate(int *l1, int *l2, int n, int m)
{
    int i;
    /*cout<<"List1: ";
    for(i=0;i<n;i++) cout<<l1[i]<<" ";
    cout<<endl;
    cout<<"List2: ";
    for(i=0;i<m;i++) cout<<l2[i]<<" ";
    cout<<endl;*/
    for(i=0;i<n;i++){
        int s=0,e=m-1,mid;
        //cout<<"search for "<<l1[i]<<endl;
        while(s<=e){
            mid=(s+e)/2;
            if(l2[mid]==l1[i]){
                //cout<<"douplicate position on list 1 "<<i<<"  Duplicate position on list 2 "<<mid<<endl;
                return l1[i];
            }
            else if(l1[i]<l2[mid]) e=mid-1;
            else if(l2[mid]<l1[i]) s=mid+1;
        }

    }
    return 0;
}
int main(void)
{
    int list1[9],list2[9],n,m,num,i;
    cin>>n>>m;
    for(i=0;i<n;i++) cin>>list1[i];
    for(i=0;i<m;i++) cin>>list2[i];
    sort(list1,list1+n);
    sort(list2,list2+m);
    num = duplicate(list1,list2,n,m);
    if(num==0){
        num = (list1[0]<list2[0])? (list1[0]*10)+list2[0] : (list2[0]*10)+list1[0];
        cout<<num<<endl;
    }
    else{
        cout<<num<<endl;
    }
    return 0;
}
