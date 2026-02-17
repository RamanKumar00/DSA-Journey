#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1 = {10,20,30,40};
    vec1.insert(vec1.begin()+2,100); 
    for(int val: vec1){
        cout<<val<<" ";
    }
    return 0;

}