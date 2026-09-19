#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] == nums[j]) {
                nums.erase(nums.begin() + j);

                n--;
                j--;
            }
        }
    }

    return nums.size();
}

int main() {
    vector<int> nums = {0, 0, 3, 3, 5, 6};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}