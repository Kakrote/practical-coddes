#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n/10==0){
        cout<<"The sum of the digits is "<<n;
    }
    if(n%9==0){
        int sum=0;
        for(int i=1;n!=0;n/10){
            int rem=n%10;
            sum=sum+rem;
        }
        cout<<" the sum of the digits is "<<sum;
    }
    else{
        cout<<"The sum of the digits is  "<<n%9;
    }
}