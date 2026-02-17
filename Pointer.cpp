#include<iostream>
using namespace std;

int main()
{
    // int x = 20;
    // int *ptr = &x;
    // int **ptr1 = &ptr;

    // cout << ptr<<endl;
    // cout << *ptr<<endl;
    // cout << ptr1;

    // in aaray 
    int arr[] = {2,3,4,5,6};
    int *ptr = arr;
    int *ptr1 = &arr[0];

    cout<< ptr<<endl;
    cout<<ptr1;

    return 0;
}