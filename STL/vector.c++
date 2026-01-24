// basics of stl

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec1;

    vec1.push_back(5);
    vec1.push_back(6);
    vec1.push_back(7);
    vec1.push_back(8);
    vec1.push_back(10);

    for(int val: vec1){
        cout<< val<< " " ;
    }
    cout<< endl;

    vec1.pop_back();
    for(int val : vec1){
        cout << val << " ";
    }
    cout<<endl;
    cout<<"val at index 2 is: "<< vec1[2];
    cout<<endl;

    cout<<vec1.front()<< endl;
    cout<<vec1.back()<< endl;
    // declare vector inside a vector
    vector <int> vec2(vec1);
    for(int val: vec2){
        cout<<val<< " ";
    }
    return 0;
}
//     vec.capacity();
//     cout<<vec.size()<< endl;
//     cout<<vec.capacity()<< endl;
