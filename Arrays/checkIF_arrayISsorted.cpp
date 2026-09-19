#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> nums = {1, 2, 1, 4, 5};

    cout << boolalpha << isSorted(nums) << endl;

    return 0;
}