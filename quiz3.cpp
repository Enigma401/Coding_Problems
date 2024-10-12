#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    bool isValid = false;

    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "Enter the day: ";
    cin >> day;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            isValid = (day >= 1 && day <= 31);
            break;
        case 4: case 6: case 9: case 11:
            isValid = (day >= 1 && day <= 30);
            break;
        case 2:
            cout << "Enter the year (for February): ";
            cin >> year;
            
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                isValid = (day >= 1 && day <= 29);
            } else {
                isValid = (day >= 1 && day <= 28);
            }
            break;
        default:
            isValid = false;
    }

    if (isValid) {
        cout << "Valid Date" << endl;
    } else {
        cout << "Invalid Date" << endl;
    }

    return 0;
}