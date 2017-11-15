#include <iostream>

#include "wordToDigit.h"

using namespace std;

/*
 * welcomes the user
 */
void welcome()
{
    cout << "\nHello and welcome!\n"
         << "WordToDigit takes in a number in words and outputs it in digits.\n"
         << "\nEnter a number in words (between Zero and Nine hundred and ninety billion, "
         << "nine hundered and ninety nine million, nine hundred and ninety thousand, "
         << "nine hundred and ninety nine.) to begin."
         << "\nPS: all other characters (including wrong spellings) are ignored." << endl;
}


/*
 * gets number from user
 * and calls function to convert all characters to lower case.
 */
void getNumber(char input[], int *len)
{
    cout << "\nNumber(in words): ";
    cin.getline(input, RANGE);

    *len = strlen(input);
       
    // convert all alphabets to lower case
    upperToLower(input, len);
}

/*
 * converts all alphabets to lower case
 */
void upperToLower(char input[], int *len)
{
    for (int i = 0; i < *len; i++)
    {
        if (isupper(input[i]))
            input[i] += DIFFERENCE;
    }
}

/*
 * converts distinct numbers from words to digits
 */
void wordTodigit(char input[], long long result[], int len, int *dLen)
{
    result[0] = 0;
    
    // number of distinct digits identified
    int digitLen = 0;
    
    for (int i = 0; i < len; i++)
    {
        // numbers begining with letter 'e'
        if (input[i] == 'e')
        {
            // numbers with letters 'ight' following 'e'
            if (input[i + 1] == 'i' && input[i + 2] == 'g' && input[i + 3] == 'h' && input[i + 4] == 't')
            {
                // eighteen identified
                if (input[i + 5] == 'e' && input[i + 6] == 'e' && input[i + 7] == 'n')
                {
                    // put identified number in result array
                    result[digitLen] = 18;
                    
                    // increase value of i to skip all letter that make of the number identified
                    i += 7;
                    
                    // track next index in result array
                    digitLen++;
                }

                // eighty identified
                else if (input[i + 5] == 'y')
                {
                    result[digitLen] = 80;
                    i += 5;
                    digitLen++;
                }

                // eight identified
                else
                {
                    result[digitLen] = 8;
                    i += 4;
                    digitLen++;
                }
            }
            
            // eleven idenified
            else if (input[i + 1] == 'l' && input[i + 2] == 'e' && input[i + 3] == 'v' && input[i + 4] == 'e' && input[i + 5] == 'n')
            {
                result[digitLen] = 11;
                i += 5;
                digitLen++;
            }
        }
        
        // numbers begining with letter 'f'
        else if (input[i] == 'f')
        {
            // numbers with letter 'i' following 'f'
            if (input[i + 1] == 'i')
            {
                // numbers with letters 'ft' following 'fi'
                if (input[i + 2] == 'f' && input[i + 3] == 't')
                {
                    // fifteen identified
                    if (input[i + 4] == 'e'  && input[i + 5] == 'e'  && input[i + 6] == 'n')
                    {
                        result[digitLen] = 15;
                        i += 6;
                        digitLen++;
                    }
                    
                    // fifty identified
                    else if (input[i + 4] == 'y')
                    {
                        result[digitLen] = 50;
                        i += 4;
                        digitLen++;
                    }
                }
                
                // five identified
                else if (input[i + 2] == 'v'  && input[i + 3] == 'e')
                {
                    result[digitLen] = 5;
                    i += 3;
                    digitLen++;
                }

            }
            // numbers with letter 'o' following 'f'
            else if (input[i + 1] == 'o')
            {
                // forty identified
                if (input[i + 2] == 'r'  && input[i + 3] == 't'  && input[i + 4] == 'y')
                {
                    result[digitLen] = 40;
                    i += 4;
                    digitLen++;
                }
                
                // numbers with letters 'ur' following 'fo'
                else if (input[i + 2] == 'u'  && input[i + 3] == 'r')
                {
                    // fourteen identified
                    if (input[i + 4] == 't'  && input[i + 5] == 'e'  && input[i + 6] == 'e'  && input[i + 7] == 'n')
                    {
                        result[digitLen] = 14;
                        i += 7;
                        digitLen++;
                    }
                    
                    // four identified
                    else
                    {
                        result[digitLen] = 4;
                        i += 3;
                        digitLen++;
                    }
                }
            }
        }
        
        // one identifed
        else if (input[i] == 'o' && input[i + 1] == 'n' && input[i + 2] == 'e')
        {
            result[digitLen] = 1;
            i += 2;
            digitLen++;
        }
        
        
        // numbers begining with letter 's'
        else if (input[i] == 's')
        {
            // numbers with letters 'even' following 's'
            if (input[i + 1] == 'e' && input[i + 2] == 'v' && input[i + 3] == 'e' && input[i + 4] == 'n')
            {
                // numbers with letter 't' following 'seven'
                if (input[i + 5] == 't')
                {
                    // seventy identified
                    if (input[i + 6] == 'y')
                    {
                        result[digitLen] = 70;
                        i += 6;
                        digitLen++;
                    }
                    
                    // seventeen identified
                    else if (input[i + 6] == 'e' && input[i + 7] == 'e' && input[i + 8] == 'n')
                    {
                        result[digitLen] = 17;
                        i += 8;
                        digitLen++;
                    }
                }
                
                // seven identified
                else
                {
                    result[digitLen] = 7;
                    i += 4;
                    digitLen++;
                }
            }
            
            // numbers with letters 'ix' following 's'
            else if (input[i + 1] == 'i' && input[i + 2] == 'x')
            {
                // numbers with letter 't' following 'six'
                if (input[i + 3] == 't')
                {
                    // sixty identified
                    if (input[i + 4] == 'y')
                    {
                        result[digitLen] = 60;
                        i += 4;
                        digitLen++;
                    }
                    
                    // sixteen identified
                    else if (input[i + 4] == 'e' && input[i + 5] == 'e' && input[i + 6] == 'n')
                    {
                        result[digitLen] = 16;
                        i += 6;
                        digitLen++;
                    }
                }
                
                else
                {
                    result[digitLen] = 6;
                    i += 2;
                    digitLen++;
                }
            }
        }
        
        // numbers begining with letter 't'
        else if (input[i] == 't')
        {
            // ten identified
            if (input[i + 1] == 'e' && input[i + 2] == 'n')
            {
                result[digitLen] = 10;
                i += 2;
                digitLen++;
            }
            
            // numbers with letter 'h' following 't'
            else if (input[i + 1] == 'h')
            {
                // numbers with letters 'irt' following 'th'
                if(input[i + 2] == 'i' && input[i + 3] == 'r' && input[i + 4] == 't')
                {
                    // thirteen identified
                    if (input[i + 5] == 'e' && input[i + 6] == 'e' && input[i + 7] == 'n')
                    {
                        result[digitLen] = 13;
                        i += 7;
                        digitLen++;
                    }
                    
                    // thirty identified
                    else if (input[i + 5] == 'y')
                    {
                        result[digitLen] = 30;
                        i += 5;
                        digitLen++;
                    }
                }
                
                // three identified 
                else if(input[i + 2] == 'r' && input[i + 3] == 'e' && input[i + 4] == 'e')
                {
                    result[digitLen] = 3;
                    i += 4;
                    digitLen++;
                }
                
                // thousand identified
                else if (input[i + 2] == 'o' && input[i + 3] == 'u' && input[i + 4] == 's' && input[i + 5] == 'a' && input[i + 6] == 'n' && input[i + 7] == 'd')
                {
                    result[digitLen - 1] *= THOUSAND;
                    result[digitLen - 2] *= THOUSAND;
                    result[digitLen - 3] *= THOUSAND;
                    i += 7;
                }
            }
            
            // numbers with letter 'w' following 't'
            else if (input[i + 1] == 'w')
            {
                // numbers with letter 'e' following 'tw'
                if (input[i + 2] == 'e')
                {
                    // twelve identified
                    if (input[i + 3] == 'l' && input[i + 4] == 'v' && input[i + 5] == 'e')
                    {
                        result[digitLen] = 12;
                        i += 5;
                        digitLen++;
                    }
                    
                    // twenty identified
                    else if (input[i + 3] == 'n' && input[i + 4] == 't' && input[i + 5] == 'y')
                    {
                        result[digitLen] = 20;
                        i += 5;
                        digitLen++;
                    }
                }
                
                // two identified
                else if (input[i + 2] == 'o')
                {
                    result[digitLen] = 2;
                    i += 2;
                    digitLen++;
                }
            }
        }
        
        // numbers begining with letter 'n'
        else if (input[i] == 'n')
        {
            // numbers with letters 'ine' following letter 'n'
            if (input[i + 1] == 'i' && input[i + 2] == 'n' && input[i + 3] == 'e')
            {
                // numbers with letter 't' following 'nine'
                if (input[i + 4] == 't')
                {
                    // nineteen identified
                    if (input[i + 5] == 'e' && input[i + 6] == 'e' && input[i + 7] == 'n')
                    {
                        result[digitLen] = 19;
                        i += 7;
                        digitLen++;
                    }
                    
                    // ninety identified
                    else if (input[i + 5] == 'y')
                    {
                        result[digitLen] = 90;
                        i += 5;
                        digitLen++;
                    }
                }
                
                // nine identified
                else
                {
                    result[digitLen] = 9;
                    i += 3;
                    digitLen++;
                }
            }
        }
        
        // zero identified
        else if (input[i] == 'z'  && input[1 + 1] == 'e' && input[i + 2] == 'r'  && input[i + 3] == 'o')
        {
            result[digitLen]  = 0;
            i += 3;
            digitLen++;
        }
        
        // hundred identified
        else if (input[i] == 'h' && input[i + 1] == 'u' && input[i + 2] == 'n' && input[i + 3] == 'd' && input[i + 4] == 'r' && input[i + 5] == 'e' && input[i + 6] == 'd')
        {
            result[digitLen - 1] *= HUNDRED;
            i += 6;    
        }
        
        // billion identified
        else if (input[i] == 'b' && input[i + 1] == 'i' && input[i + 2] == 'l' && input[i + 3] == 'l' && input[i + 4] == 'i' && input[i + 5] == 'o' && input[i + 6] == 'n')
        {
            result[digitLen - 1] *= BILLION;
            result[digitLen - 2] *= BILLION;
            result[digitLen - 3] *= BILLION;
            i += 6;
        }

        // million identified
        else if (input[i] == 'm' && input[i + 1] == 'i' && input[i + 2] == 'l' && input[i + 3] == 'l' && input[i + 4] == 'i' && input[i + 5] == 'o' && input[i + 6] == 'n')
        {
            result[digitLen - 1] *= MILLION;
            result[digitLen - 2] *= MILLION;
            result[digitLen - 3] *= MILLION;
            i += 6;
        }
    }
    
    *dLen = digitLen;
    
    addUp(result, dLen);
}

/**
 * sums all integers in an array
 */
void addUp(long long result[], int *dLen)
{
    for (int i = 1; i < *dLen; i++)
    {
        result[0] += result[i];
    }
}

/*
 * print out from an integer array
 */
void printResult(long long result[], int dLen)
{
    cout << result[0] << endl;
}

/*
 * prompt for another operation,
 * returns true for yes and false for no
 */
bool runAgain(void)
{
    char ans;
    
    cout << "\n\nWant to perform another operation? (Enter Y for yes)" << endl;
    cin >> ans;
    cin.ignore(15, '\n');
    
    if (ans == 'Y' || ans == 'y')
        return true;
        
    return false;
}