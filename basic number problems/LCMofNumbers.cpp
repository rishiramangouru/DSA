#include <bits/stdc++.h>
using namespace std;

int LCM(int n1, int n2) {

    int nMax = max(n1, n2);

    for (int i = nMax; ; i++) {

        if (i % n1 == 0 && i % n2 == 0) {
            return i;
        }
    }
}

int main() {

    int n1, n2;

    cin >> n1 >> n2;

    cout << LCM(n1, n2);

    return 0;
}