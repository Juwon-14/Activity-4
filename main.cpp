// Juwon Hong
//CIS 25
#include <iostream>
#include <iomanip>

//formating the output
using namespace std;

int main() {
    // "Course" and "Students" table
    cout << left << setw(10) << "Course" << right << setw(13) << "Students" << endl;

    //The number student for each are 100 and 50
    cout << left << setw(10) << "C++" << right << setw(10) << 100 << endl;
    cout << left << setw(10) << "JavaScript" << right << setw(9) << 50 << endl;

    return 0;
}
