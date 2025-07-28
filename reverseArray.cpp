#include<iostream>
using namespace std;
void rev(int i,int arr[],int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i],arr[n-1-i]);
    rev(i+1,arr,n);
}
int main()
{
    int arr[5] ={1,2,3,4,5};
    int n = 5;
    rev(0, arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i];   
    }


    return 0;
    }

