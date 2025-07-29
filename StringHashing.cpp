#include<iostream>
#include <unordered_map>

using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    string arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    unordered_map<string, int> hash;
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "enter the number of queries: ";
    cin >> q;

    while(q--){
        string str;
        cout<<"enter the string to find the frequencies: ";
        cin >> str;
        cout << hash[str]<<endl;
    }
    return 0;
}