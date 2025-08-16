#include<iostream>
using namespace std;
int occurOnce(int arr[], int n )
{
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int count = 0;
        
       for(int j = 0; j < n; j++){
        if(arr[j] == num){
            count ++;
        }
       }
       if(count == 1){
        return num;
       }
    }
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];

    
    
    cout << occurOnce(arr,n);
    
}