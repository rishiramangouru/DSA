#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> nums = {3, 3, 6, 1};

    int n = nums.size();
    int numMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        numMax = max(nums[i], numMax);
    }

    cout << numMax << endl;

    return 0;
}