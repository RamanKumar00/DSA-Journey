#include<iostream>
using namespace std;
int find(int n){
    if(n <= 1){
        return 1;
    }
    int last = find(n-1);
    int slast = find(n-2);

    return last + slast;
}
int main()
{
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    cout<<find(n);
    return 0;
}