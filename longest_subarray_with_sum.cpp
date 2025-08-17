#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);;
    int target ;
    int len = 0;
    cout<<"enter the sum you want to search(target): ";
    cin>>target;
    for(int i = 0; i < n; i++){
            int sum = 0;
        for(int j = i; j < n; j++){
            
           sum = sum + arr[j];
             if(sum == target){
        len = max(len,j-i+1);
    }
        }
    }

   
    cout<<"Length of the subarray is:"<< len;
    return 0;
}