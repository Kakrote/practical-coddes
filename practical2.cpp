#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter the number of rows in the pyramid ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<count<<" ";
                count++;
            }
            
        }
        cout<<endl;
    }
}