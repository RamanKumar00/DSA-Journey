#include<iostream>
using namespace std;
bool check(int arr[], int n){
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i-1]){
        return true;
    }
    else{
        return false;
    }
}
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>> n;
    int arr[n];

      for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    check(arr,n);
     if(check(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is NOT sorted in ascending order." << endl;
    }
    return 0;
}