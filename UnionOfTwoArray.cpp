#include<iostream>
#include<set>
using namespace  std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {2,4,5,8,9};

    set<int> St;
    for(int i = 0; i < 5; i++){
        St.insert(arr[i]);
    }

    for(int i = 0; i < 5; i++){
        St.insert(arr2[i]);
    }

    for(auto num: St){
        cout<<num<<" ";
    }
    return 0;
}