#include<iostream>
using namespace std;
void print(int n, int i){
    if(n < 1){
        return ;
    }
    print(n-1, i);
    cout<<n <<endl;
}
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    print(n,n);
    return 0;
}