#ifndef A_H_INCLUDED
#define A_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define SIMPLE 1
#define MIXED 0

#define FALSE 0
#define TRUE 1

typedef struct{
	long num;
	unsigned long denom;
}Fraction;

long gcd(long a, long b);
int set_fraction(Fraction * fract, int num, int denom);
void print_fract(Fraction * fract, int mode);
void simplify(Fraction * fract);


int add_fract(Fraction * result, Fraction * x, Fraction * y);


#endif
