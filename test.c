#include <stdio.h>

int main()
{
    printf("Hello World!");
    return 0;
}
#include <stdio.h>

int main()
{
    printf("Hello World!\n\n");
    printf("I am learning C.");
    return 0;
}

printf("Hello World!"); // This is a comment

/* The code below will print the words Hello World!
to the screen, and it is amazing */
printf("Hello World!");

// Create variables
int myNum = 5;           // Integer (whole number)
float myFloatNum = 5.99; // Floating point number
char myLetter = 'D';     // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

const int myNum = 15; // myNum will always be 15
myNum = 10;           // error: assignment of read-only variable 'myNum'

const int minutesPerHour = 60;
const float PI = 3.14;

const int BIRTHYEAR = 1980;

int sum1 = 100 + 50;    // 150 (100 + 50)
int sum2 = sum1 + 250;  // 400 (150 + 250)
int sum3 = sum2 + sum2; // 800 (400 + 400)

C divides the operators into the following groups :

    Arithmetic operators
        Assignment operators
            Comparison operators
                Logical operators
                    Bitwise operators

    +
    Addition Adds together two values x + y - Subtraction Subtracts one value from another x - y *Multiplication Multiplies two values x *y / Division Divides one value by another x / y % Modulus Returns the division remainder x % y++ Increment Increases the value of a variable by 1 ++x-- Decrement Decreases the value of a variable by 1 --x

    = x = 5 x = 5 += x += 3 x = x + 3 -= x -= 3 x = x - 3 *= x *= 3 x = x * 3 /= x /= 3 x = x / 3 %= x %= 3 x = x % 3 &= x &= 3 x = x & 3 |= x |= 3 x = x | 3 ^= x ^= 3 x = x ^ 3 >>= x >>= 3 x = x >> 3 <<= x <<= 3 x = x << 3

                                                                                                                                                                                                                             == Equal to x == y != Not equal x != y > Greater than x > y < Less than x < y >= Greater than or
                                                                                                                                                                                                                         equal to x >= y <= Less than or equal to x <= y

                                                                                                                                                                                                                                                                           &&Logical and Returns true if both statements are true x < 5 &&
                                                                                                                                                                                                                                                             x < 10 ||
                                                                                                                                                                                                                         Logical or Returns true if one of the statements is true x < 5 || x < 4 !Logical not Reverse the result,
      returns false if the result is true !(x < 5 && x < 10)

          printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));

int time = 20;
if (time < 18)
{
    printf("Good day.");
}
else
{
    printf("Good evening.");
}
// Outputs "Good evening."

if (condition1)
{
    // block of code to be executed if condition1 is true
}
else if (condition2)
{
    // block of code to be executed if the condition1 is false and condition2 is true
}
else
{
    // block of code to be executed if the condition1 is false and condition2 is false
}

switch (expression)
{
case x:
    // code block
    break;
case y:
    // code block
    break;
default:
    // code block
}

int i = 0;

while (i < 5)
{
    printf("%d\n", i);
    i++;
}

do
{
    // code block to be executed
} while (condition);

int i;

for (i = 0; i < 5; i++)
{
    printf("%d\n", i);
}

nt i;

for (i = 0; i < 10; i++)
{
    if (i == 4)
    {
        break; // continue
    }
    printf("%d\n", i);
}

int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++)
{
    printf("%d\n", myNumbers[i]);
}

char greetings[] = "Hello World!";
printf("%s", greetings);

// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d", myNum);

int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044

int myAge = 43;    // An int variable
int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);