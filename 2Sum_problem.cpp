#include<iostream>
using namespace std;

int summation(int arr[], int n){
  for(int i=0; i<n; i++){
    int sum=0;
    for (int j=i; j<n; j++){
     sum+=arr[j];
    }

    if(sum==target){
        return true;
    }
  }
}

int main(){
   int arr[] = {1,5,16,8,7,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    cin>>target;
    summation(arr,n);
    cout<<summation;
}
