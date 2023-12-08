#include<iostream>
using namespace std;
int main(){
    // to print a right angle pyramid of the triangle
    int n;
    int count=1;
    cout<<"Enter the number of rows :- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<count++;
        }
        cout<<"\n";
    }
}