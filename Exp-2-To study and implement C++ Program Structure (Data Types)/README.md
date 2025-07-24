Aim: To study and implement C++ Program Structure (Data Types).

Tools Used: VS Code or Programiz online compiler

Theory
This program illustrates the use of different basic data types in C++: int, float, char, double, string, and bool. It accepts user inputs for each type, displays the entered values, and shows their memory sizes using the sizeof() operator.

Integer (int)
The program asks the user to enter an integer, then displays both the number and its memory size using sizeof(). Typically, integers occupy 4 bytes, storing whole numbers without decimals. This size allows values ranging from approximately -2.1 billion to 2.1 billion.

Floating-Point (float)
The user enters a floating-point number, which the program then displays along with its storage size. Typically, a float occupies 4 bytes of memory, allowing it to store decimal values with about 6-7 digits of precision. While useful for many calculations, floats have precision limitations compared to double-precision numbers.

Character (char)
The program reads a single character from user input, prints it, and displays its size. A character occupies 1 byte, sufficient to store an ASCII character.

Double (double)
The program requests a double-precision number from the user and displays both the value and its memory usage. Doubles require 8 bytes of storage, providing 15-16 digits of precision and a broader value range compared to standard floats.

String (string)
The program prompts the user to enter a word (reading until the first space), then displays both the entered text and its memory footprint. While the sizeof(string) operator returns 24 bytes (the fixed size of the string object structure), this doesn't reflect the actual string length, which varies based on content.

Boolean (bool)
The program accepts a boolean input (where 0 = false, 1 = true), displays the value, and prints the size of the boolean type, which is 1 byte.

Key Concepts
1.sizeof() Operator: Measures the memory (in bytes) occupied by a given data type.
2.Data Representation: Shows how different C++ data types store values and their memory requirements. 
3.User Interaction: For each data type, the program prompts the user, reads input using cin, then displays the entered value and its memory size.

Program Structure
The program includes:

#include for basic input/output operations.
#include to handle string data type.
using namespace std; to avoid repeatedly using std:: before cout, cin, and string.
Algorithm
Start the program.

Integer (int) Declare variable a. Prompt: "Enter integer number" → Read input into a. Output: Value of a and sizeof(a).

Float (float) Declare variable b. Prompt: "Enter floating number" → Read input into b. Output: Value of b and sizeof(b).

Character (char) Declare variable c. Prompt: "Enter Character" → Read input into c. Output: Value of c and sizeof(c).

Double (double) Declare variable e. Prompt: "Enter double number" → Read input into e. Output: Value of e and sizeof(e).

String (string) Declare variable f. Prompt: "Enter String" → Read input into f. Output: Value of f and sizeof(f) (returns fixed object size, not string length).

Boolean (bool) Declare variable d. Prompt: "Enter Boolean value" → Read input into d. Output: Value of d and sizeof(d).

End the program.

Conclusion
Hence, we were able to understand about various data types in C++ and the memory size they occupy.
