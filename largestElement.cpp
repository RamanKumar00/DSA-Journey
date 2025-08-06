#include<iostream>
using namespace std;
void Flargest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"largest element is: "<<largest;
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    Flargest(arr,n);
}