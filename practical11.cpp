#include<iostream>
using namespace std;

int main() {
    int temp = 0;
    int arr[] = {10, 20, 40, 80, 5, 6};
    int l = sizeof(arr) / sizeof(arr[0]);

    // Bubble sort in decending order

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int k;
    cout<<"Enter the term ";
    cin>>k;
    cout<<"the kth largest number is "<<arr[k-1]<<endl;
    return 0;
}
