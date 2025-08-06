#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
    if(n == 0 || n == 1){
        return n;
    }
     int j = 0;

    for(int i = 1; i < n; i++) {
        if(arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    duplicate(arr,n);
    return 0;
}