#include <stdio.h>
int main() {

//  VARIABLES & DATA TYPES
int age = 20;            // integer variable
float height = 5.8;      // float variable
char grade = 'A';        // character variable
double salary = 2500.50; // double data type
int a;

//  CONSTANTS
const int year = 2026;   // constant value (cannot be changed)

//  OUTPUT
printf("Initial Values:\n");
printf("Age: %d\n", age);
printf("Height: %.1f\n", height);
printf("Grade: %c\n", grade);
printf("Salary: %.2lf\n", salary);
printf("Year: %d\n", year);

//  INPUT
 printf("\nEnter your age: ");
 scanf("%d", &age);

//  KEYWORDS USED
// int, float, char, double, const, return are keywords in C

//  COMMENTS : In the code but not a part of program.
// : This is single line comment
/*
-----
--- : This is multiple line comment
*/
return 0;
