#include<iostream>
using namespace std;
int main(){
    int arr[]={5,7,1,2,8,4,3};
    int l=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target sum ";
    cin>>target;
    bool flag=false;
    for(int i=0;i<=l;i++){
        for(int j=1;j<l;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            if(arr[i]+arr[j]==target){
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<"The numbers are present in the array"<<endl;
    }
    else{
        cout<<"The numbers are not present in the array"<<endl;
    }
}