#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
	// int x = 017; // octal notation for int 15
	// int y = 12; // literally just 12

	// printf("x is greater than y... %d\n", x > y);

	// short int s = 0xFFFF12;
	// char c = -1;
	// unsigned char uc = -1;

	// printf("c and uc: %c, %c", c, uc);

	// puts("hel"+"lo"); // incorrect
	// puts("hel""lo"); // correct

	// enum sz { S = 0, L = 3, XL };
	// enum zz { ZS = 0, ZL = -3, ZXL };

	// printf("value of XL in sz: %i", XL); // XL is 4 (last value incremented by 1)
	// printf("value of ZXL in zz: %i", ZXL); // ZXL is -2 (last value incremented by 1)

	// int equality = 3.00 == 3.0000000000000000;

	// printf("is equal? %i\n", equality);

	char charType;
	unsigned char uCharType;
	short shortType;
	int intType;
	unsigned int uIntType;
	unsigned long uLongType;
	float floatType;
	
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of unsigned char: %zu bytes\n", sizeof(uCharType));
	printf("Size of short: %zu bytes\n", sizeof(shortType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of unsigned int: %zu bytes\n", sizeof(uIntType));
	printf("Size of unsigned long: %zu bytes\n", sizeof(uLongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	printf("Min value for char: %i\n", CHAR_MIN);
	printf("Max value for char: %i\n", CHAR_MAX);

	printf("Min value for unsigned char: %i\n", 0);
	printf("Max value for unsigned char: %i\n", UCHAR_MAX);
	
	printf("Min value for short: %i\n", SHRT_MIN);
	printf("Max value for short: %i\n", SHRT_MAX);

	printf("Min value for int: %i\n", INT_MIN);
	printf("Max value for int: %i\n", INT_MAX);

	printf("Min value for unsigned int: %i\n", 0);
	printf("Max value for unsigned int: %i\n", UINT_MAX);

	printf("Min value for unsigned long: %i\n", 0);
	printf("Max value for unsigned long: %i\n", ULONG_MAX);

	printf("Min value for float: %f\n", FLT_MIN);
	printf("Max value for float: %f\n", FLT_MAX);

	return 0;
}

/*
	PROBLEM SET 2

	Problem 2.1
		- Determine the size, minimum and maximum value of the following data types. Please specify if your machine is 32 bit or 64 bits in the answer. (32 bit)
			char - 1 byte, -128, 127
			unsigned char - 1 byte, 0, 255
			short - 2 bytes, -32_768, 32_767
			int - 4 bytes, -2_147_483_648, 2_147_483_647
			unsigned int - 4 bytes, 0, 4_294_967_295
			unsigned long - 4 bytes, 0, 4_294_967_295
			float - 4 bytes, 0.000000, 340_282_346_638_528_859_811_704_183_484_516_925_440.000000
			                           und dec non oct sep sex qu  q   t   b   m   th

	Problem 2.2
		- Write logical expressions that test whether a given character variable `c` is:
			- lower case letter -->
			- upper case letter -->
			- digit -->
			- white space -->

	Problem 2.3
		- Consider ```in val = 0xCAFE;```. Write expressions using bitwise operators that do the following:
			- test if atleast three of last four bits (LSB) are 1
			- reverse the byte order (i.ei, produce val = 0xFECA)
			- rotate fourbits (i.e., produce va = 0xECAF)
		
	Problem 2.4
		- Using precedence rules, evaluate the following expressions and determine the value of the variables (without running the code). Also rewrite them using parenthesis to make the order explicit.
			- Assume (x = 0xFF33, MASK = 0xFF00). ```Expression: c = x & MASK == 0;```
			- Assume (x = 10, y = 2, z = 2). ```Expression: z = y = x++ + ++y * 2;```
			- Assume (x = 10, y = 4, z = 1). ```Expression: y >> x & 0x2 && z;```

	Problem 2.5
		- Determine if the following statements have any errors. If so, highlight them and explain why.
			- ```int 2nd_value = 10;``` --> variable name can't start with a number
			- Assume (x = 0, y = 0, alliszero = 1). ```alliszero = (x = 1) && (y = 0);``` --> variable assignment isn't valid inside of an expression in C
			- Assume (x = 10, y = 3, z = 0). ```y = ++x + y; z = z --> x;``` --> 
			- Assume that we want to test if last four bits of x are on. ```int MASK = 0xF; ison = x & MASK == MASK;``` --> 
*/
