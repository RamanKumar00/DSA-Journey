#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i<= n-1 ; i++){
        int mini = i;
        for(int j = i+1; j <= n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cout<<"enter the number of element of array: ";
    cin>>n;
    int arr[n];
   
    for(int i = 0; i <= n; i++){
        cin >> arr[i];
    }
    SelectionSort( arr,  n );

     for(int i = 0; i <= n; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}