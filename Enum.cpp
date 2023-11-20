#include <iostream>
using namespace std;

// Define an enumeration named Color
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main() {
    // Declare a variable of type Color
    Color myColor = GREEN;

    // Switch statement using enum values
    switch (myColor) {
        case RED:
            cout << "The color is red." << endl;
            break;
        case GREEN:
            cout << "The color is green." << endl;
            break;
        case BLUE:
            cout << "The color is blue." << endl;
            break;
        default:
            cout << "Unknown color." << endl;
    }

    // Output the numeric value of the enum constants
    cout << "Numeric value of RED: " << RED << endl;
    cout << "Numeric value of GREEN: " << GREEN << endl;
    cout << "Numeric value of BLUE: " << BLUE << endl;

    return 0;
}
