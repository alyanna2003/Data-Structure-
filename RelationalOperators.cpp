#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 5;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: "  << (a < b) << endl;
    cout << "b > c: "  << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;

    // Character comparison example
    cout << "'A' < 'a': " << ('A' < 'a') << endl;

    return 0;
}
