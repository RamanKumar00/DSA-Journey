#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1 = {10,20,30};
    vec1.erase(vec1.begin());
    for(int val: vec1){
        cout << val <<" ";
    }
    return 0;
}