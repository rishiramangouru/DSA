int sumofdigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit from n
    }
    return sum;
}

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumofdigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}