#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // =========================
    // 1. DATA TYPES IN C++
    // =========================

    // Integer
    int a = 10;
    cout << "Integer value: " << a << endl;

    // Float (Decimal)
    float b = 10.5;
    cout << "Float value: " << b << endl;

    // Double (More precision than float)
    double c = 10.555555;
    cout << "Double value: " << c << endl;

    // Character
    char d = 'A';
    cout << "Character value: " << d << endl;

    // Boolean (0 = false, 1 = true)
    bool e = true;
    cout << "Boolean value: " << e << endl;


    // =========================
    // 2. SIZEOF OPERATOR
    // =========================

    cout << "\nSize of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;
    cout << "Size of char: " << sizeof(d) << " byte" << endl;
    cout << "Size of bool: " << sizeof(e) << " byte" << endl;


    // Implicit Type Casting
    int x = 10;
    float y = x;   // automatic conversion

    cout << "\nImplicit Casting (default): " << y << endl;

    // Setting precision (IMPORTANT)
    cout << "Implicit Casting with precision: "
         << fixed << setprecision(2) << y << endl;

        
    // Explicit Type Casting (Manual)
    float p = 10.75;
    int q = (int)p;   // float → int (decimal lost)
    cout << "Explicit Casting (float to int): " << q << endl;

    // Another explicit way (modern C++)
    int r = static_cast<int>(p);
    cout << "Using static_cast: " << r << endl;


    // =========================
    // 4. IMPORTANT EXAMPLES
    // =========================

    // Integer division
    int num1 = 5, num2 = 2;
    cout << "\nInteger division: " << num1 / num2 << endl; // Output: 2

    // Convert to float
    cout << "Float division: " << (float)num1 / num2 << endl; // Output: 2.5

    return 0;


}
