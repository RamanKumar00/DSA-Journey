#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1 = {25,50,75,100};
    vec1.clear();
     
    for(int val: vec1){
        cout<<val<<" ";
    }
    cout<<"size of vec1: "<<vec1.size()<<endl;
    cout<<"capacity of vec1: "<<vec1.capacity()<<endl;
    return 0;
}