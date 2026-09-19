#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int secondLargest(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) {
        return -1;
    }

    int numMax = INT_MIN;

    // Find the largest element
    for (int i = 0; i < n; i++) {
        numMax = max(nums[i], numMax);
    }

    // Find the largest value smaller than the maximum
    int sec_larg = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (nums[i] < numMax) {
            sec_larg = max(nums[i], sec_larg);
        }
    }

    if (sec_larg == INT_MIN) {
        return -1;
    }

    return sec_larg;
}

int main() {
    vector<int> nums = {3, 3, 6, 1};
    cout << secondLargest(nums) << endl;
    return 0;
}