#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int collection[100000];
    for (int i = 0; i < n; ++i) {
        cin >> collection[i];
    }

    int m;
    cin >> m;

    int queries[100000];
    for (int i = 0; i < m; ++i) {
        cin >> queries[i];
    }

    for (int i = 0; i < m; ++i) {
        int left = 0, right = n - 1;
        bool found = false;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (collection[mid] == queries[i]) {
                found = true;
                break;
            }
            if (collection[mid] < queries[i]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        if (found) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
