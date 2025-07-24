Aim: To study and implement C++ decision making statements.

Tools Used: VS Code or Programiz Online Compiler

Theory
Conditional statements enable programs to execute different code blocks based on specified conditions. They evaluate expressions as true or false, directing program flow accordingly. The primary conditional constructs are:

if-else - Executes one block if true, another if false
Nested if-else - Checks multiple conditions sequentially
switch-case - Compares a value against multiple constant cases
These structures handle decision-making in programs, supporting: ->User input validation ->Error handling ->Multi-path program logic

if-else statement
The if-else statement executes code blocks based on conditions. It enables two-way decision making in programs.

->True case: Runs when condition is true Contains true-block statements

->False case: Runs when condition is false Contains false-block statements

Nested if-else statements
A nested if-else structure places conditional statements inside other if/else blocks, creating multi-level decision branches. This approach sequentially evaluates multiple conditions in a prioritized manner, allowing for sophisticated decision-making logic. By progressively narrowing possibilities through hierarchical checks, it handles complex scenarios requiring multiple criteria evaluations. The structure enables precise control flow based on layered conditions, though excessive nesting can reduce readability.

switch-case statement
The switch-case structure provides an efficient alternative to lengthy if-else chains when testing a single variable against multiple constant values. It evaluates an expression once, then compares it against various case labels in sequence. Each case represents a potential matching value, with associated code that executes when matched. The break statement prevents fall-through to subsequent cases, while the default case handles unmatched values. This construct significantly enhances code clarity for multi-way branching scenarios like menu systems or state transitions. By organizing discrete options into labeled blocks, switch-case improves maintainability compared to nested conditionals. However, it's limited to equality comparisons of integral or enumeration types.

Program-1: Even/Odd Number Checker
This program determines whether an input number is even or odd using modular arithmetic. The user provides an integer, which the program evaluates by calculating its remainder when divided by 2 (% operator). A zero remainder indicates an even number, while a remainder of 1 signifies an odd value. The logic employs an if-else structure to branch based on this modulus result. This fundamental parity check leverages the mathematical property that even numbers are divisible by two without remainder. Such evaluations are particularly useful in scenarios requiring alternating patterns or data classification by parity. Common applications include game mechanics (player turns), resource allocation, and algorithmic partitioning. The solution demonstrates basic conditional logic with practical mathematical foundations.

-Algorithm:
Start
Input an integer num
If num % 2 == 0, print "Even"
Else, print "Odd"
End

Program-2: Vowel/Consonant Checker
This program identifies whether an input character is a vowel or consonant. The user enters a single character, which is then checked against both uppercase and lowercase vowel sets ('A','a','E','e','I','i','O','o','U','u') using conditional statements. If the character matches any vowel, the program confirms it as a vowel; otherwise, it's classified as a consonant. The case-insensitive comparison ensures accurate detection regardless of input casing. This demonstrates fundamental character classification, useful in text analysis and input validation systems. The implementation showcases basic conditional logic with string comparison techniques. Such functionality forms the building block for more complex text processing applications like word games or linguistic analysis tools.

-Algorithm:
Start
Input a character ch
If ch is a vowel (a, e, i, o, u or A, E, I, O, U), print "Vowel"
Else, print "Consonant"
End

Program-3: Largest of Three Numbers
This program identifies the largest among three user-input numbers using nested conditional checks. It begins by comparing the first number against the other two - if greater, it's declared the maximum. When false, the logic shifts to evaluate the second number against the remaining values. If this comparison fails, the third number automatically emerges as the largest by elimination. The nested if-else structure creates a hierarchical evaluation sequence that systematically narrows down possibilities. This approach mirrors common maximum-finding algorithms used in sorting and data analysis. The solution demonstrates fundamental comparison techniques applicable in statistical operations, game development, and decision-making systems. By sequentially testing each number's dominance, it efficiently isolates the peak value without complex data structures. Such value comparisons form the basis for more advanced computational problems involving optimization and ranking.

-Algorithm:
Start
Input three numbers a, b, c
If a > b and a > c, print "a is largest"
Else if b > c, print "b is largest"
Else, print "c is largest"
End
Note: This implementation doesn't handle cases where two or all three numbers are equal

Program-4: Movie Rater
This program presents a simple interface that asks users to input their  a number (1-4). The system then displays the corresponding movie name and rates it.
-Algorithm:
1. Start the program.
2. Display a list of 4 movie titles for the user to choose from.
3. Prompt the user to enter a number between 1 and 4.
4. Read the input and store it in a variable (e.g., `movie`).
5. Use a `switch-case` structure:
   - Case 1: Display rating for Inception
   - Case 2: Display rating for Titanic
   - Case 3: Display rating for The Matrix
   - Case 4: Display rating for Mean Girls
   - Default: Display an "Invalid choice" message
6. End the program.

Program-5: Simple Calculator
This program simulates a basic calculator by taking two numbers from the user and offering four arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/). The user selects an operation, and the program computes the result accordingly. For division, it checks if the second number is zero to prevent errors, displaying "Cannot divide by zero" if true. Invalid menu choices trigger a prompt to select a valid option (1-4). The structure uses switch-case for operation selection and if-else for error handling, mimicking real-world calculator logic. It emphasizes input validation, conditional branching, and clear output.

-Algorithm:
Start
Input two numbers a, b
Display operation menu (+, -, *, /)
Input user choice
Use switch to perform selected operation
If division and b == 0, print "Cannot divide by zero"
If invalid choice, print "Invalid operation"
Print result
End

Conclusion
Hence, we implemented the use of conditional statements for accurate output and switch case for menu-driven program.
