#include<iostream>
using namespace std;
void print(int i, int n){
    if(i > n){
        return ;
    }
    cout << i << endl;
    print(i+1, n);
}
int main()
{
    int n;
    cout <<"enter the value of n: ";
    cin>> n;

    print(1,n);
    return 0;
}