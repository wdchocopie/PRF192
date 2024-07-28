# Structure of a simple C program
* Comment for prgram description /*     */
* Declareation for libraries, defines \(\#\)
* Entrypoint of C-program \(int main\(\)\)
* Statement + comments
* Exit program \(return 0\)

----
# Example
```
/* HelloWorld.c
   Print "Hello World" with C
   Author: wdchocopie
   Date: 10/5/2024
*/
#include <stdio.h>
int main() {
    
    /* Print "Hello world" */
    printf\("Hello World"\);
    /* Wait user to press ENTER key */
    getchar\(\);
    /* Quit program */
    return 0;
}

```

----
# return
* Return value depend on entrypoint type \(char, void, int,...\)
* Normally return 0 is basic value when code run successfuly

----
# Type of data \(GCC\)
* Char - 1 bytes
* Short int - 2 bytes
* Int - 4 bytes
* Long int - 4 bytes
* Float - 4 bytes
* Double - 8 bytes
* Long Double - 16 bytes

----
# int main
int main(int argc, char *argv[])

----
# Introduction
* Instruction: a task that hardware must perform on data
* Data: Constants, variables
   * Constants: Fixed value
   * Variables: Value can change when execute program
* Data: Stored in main memory \(RAM\)
* Basic operations: READ, WRITE
* Numerical data can participate in expressions.

----
# Variables and data types
* Refers to memory location
* 2 basic operation: set value, get value
* When compile, compiler will determin position where data allocated
* Data type:
   * int
   * char: can be represent by character, Decimal, Hex, Octal = ASCII
   * float
   * double
* `''` vs `""`:
   * `''` = 1 char
   * `""` = 1 string
* `&` = address 
* To change binary from positive - negative: convert number to binary -> flip bits -> add 1
* Unsigned: no negative number
* Character = ASCII
* IEE 754 data type:
   * sign
   * exponent \(float = -37 -> 38 ; double = -307 -> 308\)
   * fraction
* Declareation: data_type identifier\[= init value, another identifier....\]
* Name: often no more than 31 character, 1 word only \(letter, number \[can't start with number\], `_`\) + can't be C reserved word
* Example: float data1, data2=5.1
* Example char:
   * n = 125 \(decimal\)
   * n = 0175 \(Octal\)
   * n = 0x7D \(hex\)
* Variable assign by `=`
* Escape sequence:
[image]
* Path: use \\\\ \(same as markdown\)
* interger -> int ; real -> double
* Define: \#define \[name\] \[value\]
* Constant: const \[type data\] \[name\] = \[value\]
* Name:
   * Const: start with Capital letter
   * variable: start with normal letter
* Some variable already define: M_PI....
* Input: scanf\(\) - EX: scanf\("%d%d",&a,&b\)
* Output: printf\(\) - EX: printf\("%d%d",a,2293620\)
