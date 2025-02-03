// допоміг чат гпт.

#include <iostream>
using namespace std;

// Функція для знаходження першого елемента, який не менший за x
int first_element(int arr[], int n, int x) {
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }
    return left;
}

// Функція для обчислення кількості входжень кольору
int count_occurrences(int arr[], int n, int x) {
    int first = first_element(arr, n, x);

    if (first == n || arr[first] != x) {
        return 0;
    }
    int last = first_element(arr, n, x + 1);

    return last - first;
}

int main() {

    int n;
    cin >> n;

    int animals[100000];
    for (int i = 0; i < n; ++i) {
        cin >> animals[i];
    }

    int m;
    cin >> m;

    int queries[100000];
    for (int i = 0; i < m; ++i) {
        cin >> queries[i];
    }

    for (int i = 0; i < m; ++i) {
        int color = queries[i];
        cout << count_occurrences(animals, n, color) << endl;
    }

    return 0;
}
