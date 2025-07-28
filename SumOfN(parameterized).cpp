#include<iostream>
using namespace std;

int print(int i, int sum){
    if(i < 1){
        return sum;
    }
    print(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin >> n;
    

   int total= print(n,0);
   cout << total;
}
