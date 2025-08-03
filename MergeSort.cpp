#include<iostream>
using namespace std;
void MergeSort(int arr[],int low,int mid,int high){
    int n = high - low + 1;
    int arr2[n];
    int k = 0;
    int left  = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            arr2[k++] = arr[left++];

        }
        else{
            arr2[k++] = arr[right++];
        }
    }
         
    while(left <= mid) {
        arr2[k++] = arr[left++];
    }


    while(right <= high) {
        arr2[k++] = arr[right++];
    }

   
    for(int i = 0; i < n; i++) {
        arr[low+i] = arr2[i];
    }


}
void Ms(int arr[], int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low + high)/2;
    Ms(arr,low,mid);
    Ms(arr,mid+1,high);
    MergeSort(arr,low,mid,high);
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    Ms(arr,0,n-1);
    
    cout << "Sorted array: ";
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;
    return 0;
}