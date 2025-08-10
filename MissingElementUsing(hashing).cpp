#include <iostream>
using namespace std;

int Find(int arr[], int n, int N) {
    bool hashTable[N] = {false};

   
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < N) {
            hashTable[arr[i]] = true;
        }
    }

 
    for (int i = 0; i < N; i++) {
        if (!hashTable[i]) {
            return i;
        }
    }

    return -1; 
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = Find(arr, n, N);
    if (missing != -1)
        cout << "Smallest missing number is: " << missing << endl;
    else
        cout << "No number is missing in range 0 to " << N - 1 << endl;

    return 0;
}
