// Vivo, Alyanna Mae R.
// BSIT-2J
// LAB EXERCISES 

  #include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Compute Area of Circle\n";
    cout << "2. Compute Area of Rectangle\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Area of Circle" << endl;
            break;
        case 2:
            cout << "Area of Rectangle" << endl;
            break;
        case 3:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
