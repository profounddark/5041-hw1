#include <iostream>

using std::cout, std::cin, std::endl;

// Function:    power
// Purpose:     computes num to the exp power
// Parameters:  the number, and the exponent - exp
// Returns:     0 ix exp is negative, 1 if exp i 0; raise num to the exp
//              power otherwise.

int power(int num, int exp);


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

    return result;

}


int main() {

    int testBase = 0;
    int testPower = 0;

    cout << "Enter a base: ";
    cin >> testBase;
    cout << "Enter a power: ";
    cin >> testPower;

    cout << endl;

    cout << testBase << " to the " << testPower << " is ";
    cout << power(testBase, testPower) << endl;


    return 0;
}
