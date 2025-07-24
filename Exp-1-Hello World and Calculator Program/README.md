Aim: Hello World & Calculator Program.

Tools Used: VS Code or Programiz online compiler

Theory
A C++ program begins with the #include directive, which includes the standard input/output library necessary for using cin and cout. The statement using namespace std; allows direct use of these functions without the std:: prefix. Execution starts in the main() function, where cout displays messages like "Welcome to C++ Programming!" and "Hello World," followed by endl to move to the next line. The program then declares an integer variable a and uses cin to read user input, storing it in a. The entered value is displayed using cout, followed by a closing message. Finally, return 0; indicates successful program termination. This structure demonstrates fundamental C++ concepts, including I/O operations, variable usage, and program flow, forming the basis for more complex programming tasks.

-Purpose of iostream: The iostream library provides fundamental input/output capabilities in C++, primarily through cin (for input) and cout (for output). These identifiers are part of the std namespace, requiring either explicit qualification (std::cout) or a using namespace std; declaration for direct access.

Algorithm
-PROGRAM-1:
Program Initialization
Begin program execution
Print: "Hello World"

-PROGRAM-2: 
1.Prompt user: "Enter a number: " 
2.Store input in variable x 
3.Display confirmation: "You entered: [x]"
4.Calculator Functionality
5.Input Phase: Prompt: "Enter number 1: " → Store in variable a Prompt: "Enter number 2: " → Store in variable b
6.Computation Phase: Calculate sum: a + b Calculate difference: a - b Calculate product: a * b Calculate quotient: a / b
7.Output Phase: Display: "Sum: [result]" Display: "Subtraction: [result]" Display: "Multiplication: [result]" Display: "Division: [result]"
8.Program Termination: End execution

-Program1: This program demonstrates the basic structure of a C++ program and the use of the cout statement to display output on the screen.In this program, the #include preprocessor directive is used to include the standard input-output stream library which allows us to use cout and cin. The main() function is the entry point of every C++ program. Inside main(), the cout statement is used to print "Hello World" on the screen. The statement return 0; indicates that the program has ended successfully. This program helps beginners understand how to write, compile, and run a simple C++ program and how to display a message using cout.

-Program2:This program accepts two floating-point numbers as input from the user and performs four basic arithmetic operations: addition, subtraction, multiplication, and division. First, two float variables num1 and num2 are declared to store user inputs. The cin statement is used to take input from the user. Then, the following operations are performed:

Addition: The two numbers are added and the result is stored in sum. Subtraction: The second number is subtracted from the first and stored in sub. Multiplication: Both numbers are multiplied and the result is stored in multi. Division: The first number is divided by the second number and the result is stored in div.

The results of each operation are displayed using cout. The use of the float data type ensures that decimal values are preserved in all calculations. This program helps to understand how to perform arithmetic operations in C++ and how to handle user input and output. It also demonstrates the importance of using appropriate data types to avoid loss of precision in calculations.

Conclusion
Hence, we were able to print hello world and build a basic calculator in C++.
