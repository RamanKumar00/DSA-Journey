#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Use vector to store user input
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Use unordered_map as a hash to store frequencies
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {
        int number;
        cout << "Enter the number to find frequency of: ";
        cin >> number;
        cout << hash[number] << endl;
    }

    return 0;
}
