#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 3;

    //-------
    //  Arthimetic Operator
    //------

    cout << "Addition: " << (a + b) << endl;        // 13
    cout << "Subtraction: " << (a - b) << endl;     // 7
    cout << "Multiplication: " << (a * b) << endl;  // 30
    cout << "Division: " << (a / b) << endl;        // 3 (integer division)
    cout << "Modulus: " << (a % b) << endl;         // 1


    //-------
    //  Relational Operator
    //------



    cout << "Equal: " << (a == b) << endl;          // 0 (false)
    cout << "Not Equal: " << (a != b) << endl;      // 1 (true)
    cout << "Greater: " << (a > b) << endl;         // 1
    cout << "Less: " << (a < b) << endl;            // 0
    cout << "Greater Equal: " << (a >= b) << endl;  // 1
    cout << "Less Equal: " << (a <= b) << endl;     // 0


    //-------
    //  Logical Operator
    //------

    cout << "AND: " << ((a > 5) && (b > 2)) << endl;   // 1
    cout << "OR: " << ((a < 5) || (b > 2)) << endl;    // 1
    cout << "NOT: " << !(a > 5) << endl;               // 0



    return 0;
}