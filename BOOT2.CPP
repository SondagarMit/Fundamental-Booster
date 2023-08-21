#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int startYear, endYear;
    
    cout << "Enter the starting year: ";
    cin >> startYear;
    
    cout << "Enter the ending year: ";
    cin >> endYear;
    
    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;
    
    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            cout << year << endl;
        }
    }
    
    return 0;
}
