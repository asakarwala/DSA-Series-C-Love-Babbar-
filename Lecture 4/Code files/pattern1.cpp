#include <iostream>
using namespace std;

int main() {
    // Pattern 1:
    // Example (n = 4)
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    int n;

    cout << "Enter the number: ";
    cin >> n;

    // Outer loop → controls rows
    for (int i = 1; i <= n; i++) {

        // Inner loop → prints numbers from 1 to n
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}