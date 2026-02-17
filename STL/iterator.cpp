#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1 = {10,20,30,40,50};
    // cout<<*(vec1.begin())<<endl;
    // cout<<*(vec1.end())<<endl;
    // cout<<*(vec1.rbegin())<<endl;
    // cout<<*(vec1.rend())<<endl;
    vector<int>::iterator it;

    for(it = vec1.begin(); it != vec1.end(); it++){     // forward 
        cout<<*(it) <<" ";
       
    }
     cout<<endl;

    for(auto it = vec1.rbegin(); it!=vec1.rend(); it++ ){    //backward
        cout<< *(it)<<" ";
    }
    return 0;
}