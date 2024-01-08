#include <stdio.h>
#include <stdlib.h>

#define msg "Hello World"
// #define add3(x, y, z) (x + y + z)
#define squared(x) x * x
#define squared1(x) (x*x)
#define squared2(x) (x)*(x)
#define squared3(x) ((x)*(x))

/*
	if, #ifdef, #ifndef, #else, #elif, #endif

	These are preprocessor macros that are evaluated before the code itself is compiled.
	They are primarily used in header files to ensure declarations happen only once.
*/

/*
	#pragma - preprocessor directive
	#error, #warning - triggera custom compiler error/warning
	#undef msg - remove the definition of msg definition at compile time
*/

int main() {
	float x = 2.0;
	float y = 6.0;

	float* pX = &x;
	float* pY = &y;

	float z = x + 3 * x / (y - 4);

	printf("x: %f\n", x);
	printf("y: %f\n", y);

	printf("x address: %p\n", pX);
	printf("y address: %p\n", pY);
	printf("x value from dereferencing address: %f\n", *pX);
	printf("y value from dereferencing address: %f\n", *pY);

	printf("arithmetic evaluation: %f\n", z);

	// int add3Result = add3(1, 2, 3);
	// printf("add3Result: %i", add3Result);

	float squaredResult = squared(2 + 1);
	printf("squaredResult: %f\n", squaredResult);
	float squared1Result = squared1(2 + 1);
	printf("squared1Result: %f\n", squared1Result);
	float squared2Result = squared2(2 + 1);
	printf("squared2Result: %f\n", squared2Result);
	float squared3Result = squared3(2 + 1);
	printf("squared3Result: %f\n", squared3Result);

	return 0;
}

/*
	PROBLEM SET 1

	Problem 1.1
		- What do curly braces denote in C? Why does it make sense to use curly braces to surround the body of a function? 
			Curly braces denote a code block.
			Because the body of a function should be a code block with its own scope, rather than living inside of the global scope
		- Describe the difference between the literal values 7, "7", and '7'.
			7 - int primitive type
			"7" - string type
			'7' - char primitive type
			
	Problem 1.2
		- Consider the statement ```double ans = 18.0 / squared(2 + 1);```. For each of the four versions of the function macro `squared()` below, write the corresponding value of ans.
			1. #define squared(x) x * x --> #define squared(x) 2 + 1 * 2 + 1
			2. #define squared(x) (x * x) --> #define squared(x) (2 + 1 * 2 + 1)
			3. #define squared(x) (x) * (x) --> #define squared(x) (2 + 1) * (2 + 1)
			4. #define squared(x) ((x) * (x)) --> #define squared(x) ((2 + 1) * (2 + 1))			
*/
