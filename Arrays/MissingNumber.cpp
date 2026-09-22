#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i <= n; i++) {

        if (binary_search(nums.begin(), nums.end(), i)) {
            // Number found
        }
        else {
            return i;
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {0, 2, 3, 1, 4};

    cout << missingNumber(nums);

    return 0;
}