#include<iostream>
using namespace std;
int  Find(int arr[], int n, int N){
    for(int i = 0; i < N; i++){
        int flag = 0;
        for(int j = 0; j < n ; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        return i;

    }
}
int main(){
    int N;
    cout<<"enter the value of N:";
    cin >> N;
     int n ;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
   cout<< Find(arr,n,N);
    return 0;
}