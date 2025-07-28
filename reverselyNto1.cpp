#include<iostream>
using namespace std;
void print(int n, int i){
    if(n < 1){
        return ;
    }
     cout << n << endl;
    print(n-1 ,1);
   
    
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    print(n,1);
    return 0;
}