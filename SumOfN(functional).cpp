#include<iostream>
using namespace std;
int print(int n){
    if(n < 1){
        return 0;
    }
    return n + print(n-1);
    
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    
     cout << print(n);
}