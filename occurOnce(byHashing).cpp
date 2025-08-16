#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of element: ";
    cin >> n;
    int arr[n];
    int maxi = 0;
     for(int i = 0; i < n; i++){
        cin >> arr[i];
        maxi = max(maxi,arr[i]);
    }

    int hash[maxi+1] = {0};

    for(int i = 0 ; i < n; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i < maxi; i++){
        if(hash[i] == 1)
        cout<<"The number that appears only once is: "<<i;

    }
return 0;

}
