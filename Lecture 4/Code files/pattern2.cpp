#include <iostream>
using namespace std;

int main() {
    // Pattern 2:
    // Example (n = 3)
    // 3 2 1
    // 3 2 1
    // 3 2 1

    int n;

    cout << "Enter the number: ";
    cin >> n;

    // Outer loop → rows
    for (int i = 1; i <= n; i++) {

        // Inner loop → decreasing numbers from n to 1
        for (int j = 1; j <= n; j++) {
            cout << (n - j + 1) << " ";
        }

        cout << endl; // next row
    }

    return 0;
}