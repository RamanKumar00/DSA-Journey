#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 4, 5, 8, 9};

    set<int> St(arr, arr + 5); 

    cout << "Common elements: ";
    for (int i = 0; i < 5; i++) {
        if (St.find(arr2[i]) != St.end()) {
            cout << arr2[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
