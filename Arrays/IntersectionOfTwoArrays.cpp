#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums1 = {4, 9, 5, 9};
    vector<int> nums2 = {9, 4, 9, 9};

    vector<int> answer;

    // Sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;

    // Compare both arrays
    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] == nums2[j]) {

            answer.push_back(nums1[i]);

            i++;
            j++;
        }

        else if (nums1[i] < nums2[j]) {
            i++;
        }

        else {
            j++;
        }
    }

    // Print the answer
    cout << "Intersection: ";

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}