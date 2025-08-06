#include<iostream>
using namespace std;
void Flargest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"largest element is: "<<largest <<endl;
    int Slargest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > Slargest && arr[i] != largest){
            Slargest = arr[i];
        }
    }
    cout<<"Second largest element in array is: "<<Slargest;
}
int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Flargest(arr,n);
   

}