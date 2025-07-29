#include<iostream>
using namespace std;
int find(int arr[],int key){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(key == arr[i]){
            count ++;
        }
    }
    return count;
}
int main()
{
    int arr[5] = {1,2,4,3,1};
    int key;
    cout<<"enter the number you want to find: ";
    cin>>key;

    cout<<find(arr,key);
}