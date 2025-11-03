//Vivo, Alyanna Mae R.
// BSIT-2J
// LAB EXERCISES 

#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 90)
        cout << "Remark: Excellent" << endl;
    else if (grade >= 85)
        cout << "Remark: Very Good" << endl;
    else if (grade >= 75)
        cout << "Remark: Satisfactory" << endl;
    else
        cout << "Remark: Fail" << endl;

    return 0;
}
