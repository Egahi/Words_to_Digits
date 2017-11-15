#ifndef _WORDTODIGIT_H_
#define _WORDTODIGIT_H_

#define RANGE 200
#define UPPERCASEMIN 65
#define UPPERCASEMAX 91
#define DIFFERENCE 32
#define DIGITS 15
#define HUNDRED 100
#define THOUSAND 1000
#define MILLION 1000000
#define BILLION 1000000000

void welcome(void);

void getNumber(char [], int *);

void upperToLower(char [], int *);

void wordTodigit(char [], long long [], int, int *);

void addUp(long long [], int *);

void printResult(long long [], int);

bool runAgain(void);

#endif