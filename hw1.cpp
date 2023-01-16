#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Function:    power
// Purpose:     computes num to the exp power
// Parameters:  the number, and the exponent - exp
// Returns:     0 ix exp is negative, 1 if exp i 0; raise num to the exp
//              power otherwise.
int power(int num, int exp);

// Function:    myLog
// Purpose:     compute the nearest integer log (rounded down)
// Parameters:  the base and the value to compute
// Returns:     -1 if value is 0 or negative; the log base of value,
//              rounded down to the nearest int
int myLog(int base, int value);


/*********************************************************************/

/**
 * power performs an exponentiation operation, raising the base num
 * to the power of exp
 * @param num the base of the exponentiation
 * @param exp the power to raise the base by
 * @return 0 if exp is negative, 1 if exp is 0; num ^ exp otherwise
 */
int power(int num, int exp) {

    int result;

    // unique case: exp < 0
    if (exp < 0) {
        result = 0;
    }

    // all other cases
    else {
        result = 1;
        for (int i = 0; i < exp; i++) {
            result = result * num;
        }
    }

    // return result
    return result;

}

/**
 * myLog performs a basic integer log calculation, rounded down to the
 * nearest integer
 * @param base the base of the log calculation
 * @param value the value to calculate for
 * @return -1 if value was 0 or negative, otherwise the log calculation
 * rounded down to the nearest integer
 */
int myLog(int base, int value) {

    int result = 0;

    // loop until base ^ result > value
    while (power(base, result) <= value) {
        result++;
    }

    // the while loop went one too far, so subtract one
    return result - 1;
}

/**
 * testPower prompts the user for data in order to test the power function.
 */
void testPower() {
    // variables for receiving input from user
    int testBase = 0;
    int testPower = 0;

    // prompt user for base and input value
    cout << "Enter a base: ";
    cin >> testBase;
    // prompt user for power and input value
    cout << "Enter a power: ";
    cin >> testPower;

    // for whitespacing
    cout << endl;

    // display output
    cout << testBase << " to the " << testPower << " is ";
    cout << power(testBase, testPower) << endl;
}

/**
 * testLog prompts the user for data in order to test the myLog function
 */
void testLog() {
    // variables for receiving input from user
    int testBase = 0;
    int testNumber = 0;

    // prompt user for base and input value
    cout << "Enter a base: ";
    cin >> testBase;
    // prompt user for number and input value
    cout << "Enter a number: ";
    cin >> testNumber;

    // for whitespacing
    cout << endl;

    // display output
    cout << "Log of " << testNumber << " in base " << testBase << " is ";
    cout << myLog(testBase, testNumber) << endl;
}

int main() {

    // run function to test power
    testPower();

    // for whitespacing
    cout << endl;

    // run funciton to test myLog
    testLog();


    return 0;
}
