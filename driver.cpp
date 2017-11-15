/**
 * Words_to_digits.cpp
 *
 * this program takes in a number in words,
 * and outputs it in digits.
 *
 * @s_egahi
 *
 * this is Word to digit
 */

#include <iostream>

#include "wordToDigit.h"

using namespace std;

int main(void)
{
    // array to hold input
    char *input = new char[RANGE];

    // welcome user
    welcome();

    do
    {
        // number of characters entered
        int len;

        // get number in words
        getNumber(input, &len);

        // array to hold digits
        long long *result = new long long[DIGITS];
        
        // number of distinct digits identified
        int dLen = 0;
        
        // convert to digits
        wordTodigit(input, result, len, &dLen);

        // display result
        printResult(result, dLen);

        delete [] result;

      // prompt to run again
    } while(runAgain());

    delete [] input;

    return 0;
}
