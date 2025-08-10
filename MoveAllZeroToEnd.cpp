#include<iostream>
using namespace std;

void MoveEnd(int arr[],int n){
int temp [n];
int j = 0;
for(int i = 0;i < n; i++){
    if(arr[i] != 0){
        temp[j] = arr[i];
        j++;
    }
}
for(int i = j; i < n; i++){
    temp[i] = 0;

}

for(int i = 0; i < n; i++){
    arr[i] = temp[i];
}
}
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    int arr[n];
     for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    MoveEnd(arr,n);
     cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}