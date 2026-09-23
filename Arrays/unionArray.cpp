#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] < nums2[j]) {

            if (ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }

            i++;
        }

        else if (nums2[j] < nums1[i]) {

            if (ans.empty() || ans.back() != nums2[j]) {
                ans.push_back(nums2[j]);
            }

            j++;
        }

        else {

            if (ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }

            i++;
            j++;
        }
    }

    while (i < nums1.size()) {

        if (ans.empty() || ans.back() != nums1[i]) {
            ans.push_back(nums1[i]);
        }

        i++;
    }

    while (j < nums2.size()) {

        if (ans.empty() || ans.back() != nums2[j]) {
            ans.push_back(nums2[j]);
        }

        j++;
    }

    return ans;
}

int main() {

    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> ans = unionArray(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
} 