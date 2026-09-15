#include <iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {

        int count = 0;

        if (n == 0)
            return 1;

        if (n < 0)
            n = -n;

        while (n > 0) {
            n = n / 10;
            count += 1;
        }

        return count;
    }
};

int main() {
    Solution obj;

    cout << obj.countDigit(234);

    return 0;
}