#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByOne(vector<int>& nums) {
    
    int x = nums[0];

    nums.push_back(x);

    nums.erase(nums.begin());
}

int main() {
    
    vector<int> nums = {1, 2, 3, 4, 5};

    rotateArrayByOne(nums);

    cout << "Rotated array: ";

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}