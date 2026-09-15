#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev == original;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }

    return 0;
}