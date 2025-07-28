#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    return (n == 0) ? 0 : 1 + countDigits(n / 10);
}


int reverseNumber(int n, int digits) {
    if (n == 0)
        return 0;

    return (n % 10) * pow(10, digits - 1) + reverseNumber(n / 10, digits - 1);
}

bool isPalindrome(int n) {
    int rev = reverseNumber(n, countDigits(n));
    return n == rev;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
