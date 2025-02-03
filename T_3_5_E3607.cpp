#include <iostream>
using namespace std;
// Я не розумію чому воно не приймає на Eolymp, сидів годину намагався розібратись - не вийшло.
// А в visual studio працює.

int main() {
    
    int n;
    cin >> n;

    while (n) {
        int height[20000];
        int count = 0, a, b;

        for (int i = 0; i < n; i++) {
            cin >> height[i];
        }

        cin >> a >> b;

        for (int i = 0; i < n; i++) {
            if (height[i] >= a && height[i] <= b) {
                count++;
            }
        }

        cout << "result:" << count << endl;

    }
    return 0;
}
