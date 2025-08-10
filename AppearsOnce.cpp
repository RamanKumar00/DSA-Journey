#include<iostream>
using namespace std;
int AppearOnces(int arr[], int n){
    for(int i = 0; i < n; i++){
    int count = 0;

        int num = arr[i];
        for(int j = 0; j < n; j++){
            if(arr[j] == num)
            count++;
        }
          if(count == 1)
         return num;
    }
    return -1;
  
}
int main(){
     int n;
    cout << "enter the value of n: ";
    cin >> n;
    int arr[n];
     for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
   cout<< AppearOnces(arr,n);
    return 0;
}