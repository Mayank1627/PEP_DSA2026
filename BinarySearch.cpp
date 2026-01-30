#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& a, int target) {
    int l = 0, r = a.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == target) return mid;
        else if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9, 11};
    int target = 7;

    cout << binarySearch(a, target);
    return 0;
}
