/* Objective

Task

This challenge requires you to print  on a single line, and then print the already provided input string to stdout.

Example

The required output is:

Hello, World!  
Life is beautiful

Function Description

Complete the main() function below.

The main() function has the following input:

string s: a string

Prints

*two strings:* "Hello, World!" on one line and the input string on the next line.

Input Format

Sample Input

Welcome to C programming.

Sample Output

Hello, World!
Welcome to C programming. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]", s);
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}
