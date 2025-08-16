#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of element: ";
    cin >> n;
    int arr[n];
   
     for(int i = 0; i < n; i++){
        cin >> arr[i];
     }
     int x = 0;
     for(int i = 0; i < n; i++){
        x ^= arr[i];
     }
     cout<<"the unique element is: "<<x;
     return 0;

}