# Homework Assignment #1

## Task one
Write a function called power that has the following prototype:
int power ( int num, int exp);
The power function should compute numexp and return the answer as an int. If exp is negative, power should return 0. If it is 0 then power should return 1. You should use a loop to compute this (and not pow (x, y) or anything else in the Math library *cmath*). You can use the following comment to describe your power function.

```
//
// Function:      power
// Purpose:       computes num to the exp power
// Parameters:  The number – num, and the exponent – exp
// Returns:       0 if exp is negative; 1 if exp is 0; raise num to the exp
//                      power otherwise.
```

Use main to test your power function.

## Task Two
Write a function myLog that computes the logarithm of a number with a given base. This function should return the answer as an int, rounded down. It must utilize the function from Task 1 (and not any functions from *cmath*). (Recall that if a^b = c, then logac = b). Revise your main function to prompt the user for one power call and one myLog call. 

