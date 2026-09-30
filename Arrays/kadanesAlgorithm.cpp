#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int maxSum = arr[0];

    for (int i = 0; i < arr.size(); i++) {

        sum = sum + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;

    return 0;
}