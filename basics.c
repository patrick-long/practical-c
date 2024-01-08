#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// void sayHi(char *name, int age);

int main() {
	// // Creating and Using Variables
	// char name[] = "John";
	// int age = 35;

	// printf("There once was a man named %s.\n", name);
	// printf("He was %d years old.\n", age);
	// printf("He really liked the name %s,\n", name);
	// printf("but did not like being %d.\n", age);


	// // Data Types
	// int age = 40;
	// double gpa = 3.6;

	// char grade = 'A';
	// char name[] = "Patrick";


	// // Printf
	// int favNum = 9;
	// char word[] = "character";
	// char favChar = 'x';

	// printf("My favorite %s is %c, and my favorite number is %d", word, favChar, favNum);


	// // Working With Numbers
	// int num = 6;
	// int divisor = 2;
	// float dec = 3.5;

	// printf("%i\n", num / divisor);
	// printf("%d\n", num / divisor);

	// printf("%f\n", dec / divisor);
	// printf("%f\n", pow(3, 4));
	// printf("%f\n", ceil(65.036));
	// printf("%f\n", floor(65.036));


	// // Getting User Input
	// int age;
	// printf("Enter your age: ");
	// scanf("%d", &age);

	// printf("You are %d years old.\n", age);

	// double gpa;
	// printf("Enter your gpa: ");
	// scanf("%lf", &gpa);

	// printf("Your gpa is %f\n", gpa);

	// char grade;
	// printf("Enter your grade: ");
	// scanf("%c", &grade);

	// printf("Your grade is %c\n", grade);

	// char name[20];
	// printf("Enter your name: ");
	// fgets(name, 20, stdin);

	// printf("Your name is %s\n", name);


	// // Implementing a Basic Calculator
	// int firstAddend;
	// int secondAddend;
	// int sum;

	// printf("Basic Calculator\n");
	// printf("Enter first number: ");
	// scanf("%d", &firstAddend);

	// printf("Enter second number: ");
	// scanf("%d", &secondAddend);

	// sum = firstAddend + secondAddend;
	// printf("The sum is: %d", sum);


	// // Arrays
	// int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	// printf("%d", luckyNumbers[0]);

	// int luckyNumbers[20];
	// luckyNumbers[1] = 80;

	// printf("%d", luckyNumbers[0]);
	// printf("%d", luckyNumbers[1]);


	// // Functions
	// sayHi("Patrick", 25);


	// // If Statements -- the same as in JS
	// // Switch Statements -- the same as in JS


	// // Better Calculator
	// int num1;
	// int num2;
	// char operand;
	// int result;

	// printf("Enter first number: ");
	// scanf("%d", &num1);

	// printf("Enter second number: ");
	// scanf("%d", &num2);

	// printf("Enter operand (choose from '+', '-', '*', or '/'): ");
	// scanf(" %c", &operand);

	// switch(operand) {
	// 	case '+':
	// 		result = num1 + num2;
	// 		break;
	// 	case '-':
	// 		result = num1 - num2;
	// 		break;
	// 	case '*':
	// 		result = num1 * num2;
	// 		break;
	// 	case '/':
	// 		result = num1 / num2;
	// 		break;
	// }

	// printf("The result is: %d", result);


	// // Structs
	// struct Student {
	// 	char name[20];
	// 	char major[20];
	// 	int age;
	// 	double gpa;
	// };

	// struct Student student;
	// // char name[] = "Patrick";
	// // char major[] = "Computer Science";

	// // student.name = &name;
	// // student.major = &major;
	// strcpy(student.name, "Patrick");
	// strcpy(student.major, "Computer Science");
	// student.age = 25;
	// student.gpa = 4.0;

	// struct Student student = {
	// 	"Patrick",
	// 	"Computer Science",
	// 	25,
	// 	4.0
	// };

	// printf("Name: %s\n", student.name);
	// printf("Major: %s\n", student.major);
	// printf("Name: %d\n", student.age);
	// printf("Name: %f\n", student.gpa);


	// // While Loops -- the same as in JS
	// // For Loops -- the same as in JS


	// // 2D Arrays / Nested For Loops -- the same as in JS
	// // but 2D array instantiation is as below
	// int nums[3][2] = {
	// 	{1, 2},
	// 	{3, 4},
	// 	{5, 6}
	// };


	// // Memory Addresses
	// int age = 30;
	// double gpa = 4.0;
	// char grade = 'A';

	// printf("Age: %p\n", &age);
	// printf("GPA: %p\n", &gpa);
	// printf("Grade: %p\n", &grade);


	// // Pointers
	// int age = 30;
	// int *pAge = &age;

	// double gpa = 4.0;
	// double *pGpa = &gpa;

	// char grade = 'A';
	// char *pGrade = &grade;

	// printf("age's memory address: %p\n", &age);
	// printf("age's memory address via pointer variable: %p\n", pAge);

	// printf("gpa's memory address: %p\n", &gpa);
	// printf("gpa's memory address via pointer variable: %p\n", pGpa);

	// printf("grade's memory address: %p\n", &grade);
	// printf("grade's memory address via pointer variable: %p\n", pGrade);


	// // Dereferencing Pointers
	// int age = 30;
	// int *pAge = &age;

	// printf("%p\n", pAge);
	// printf("%d\n", *pAge);


	// // Writing to Files
	// // Writing to file - will overwrite on every run
	// FILE *pFile = fopen("employees.txt", "w");
	// printf("%p\n", pFile);

	// fprintf(pFile, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting\n");
	
	// fclose(pFile);

	// // Appending to file - will not overwrite existing file
	// FILE *pFile = fopen("employees.txt", "a");
	// printf("%p\n", pFile);

	// fprintf(pFile, "Kelly, Customer Service\n");

	// fclose(pFile);


	// // Reading from Files
	// FILE *pFile = fopen("employees.txt", "r");
	// printf("%p\n", pFile);

	// char line[255];
	// int i;

	// printf("printing first 5 lines of file...\n");

	// for (i = 0; i < 5; i++) {
	// 	fgets(line, sizeof(line), pFile);
	// 	printf("%s", line);
	// }


	return 0;
}

// void sayHi(char *name, int age) {
// 	printf("Hello %s, you are %d years old.", name, age);
// }
