Aim: To study and implement Operators in C++.

Tools Used: VS Code or Programiz online compiler

Theory
Operators in C++ are special symbols or keywords that perform operations on data and evaluate expressions. They are categorized based on their functionality, including arithmetic, relational, logical, and other types of operations.

Arithmetic Operators
These operators perform mathematical calculations between two or more numeric values. The fundamental arithmetic operators include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%). They are essential for various computational tasks, from simple calculations to complex algorithms in fields like finance, scientific computing, and game development.

Relational Operators
Relational operators compare two values or expressions, returning a boolean result (true or false) based on their relationship. Common relational operators include less than (<), greater than (>), equal to (==), not equal to (!=), less than or equal to (<=), and greater than or equal to (>=). These operators are crucial for controlling program flow in conditional statements (if, while, for) and for making decisions based on value comparisons.

Logical Operators
Logical operators work with boolean values to combine or modify conditions. The primary logical operators are AND (&&), OR (||), and NOT (!). They enable complex condition evaluation by combining multiple relational expressions or inverting boolean results. These operators are particularly useful for implementing decision-making logic where multiple conditions must be satisfied simultaneously or alternatively.

Program-1: To check if a number is Positive, Negative or Zero
This program accepts an integer from the user and checks whether it is positive, negative, or zero using conditional statements.

-The user is prompted to enter a number. -The program uses if, else if, and else statements to check: If the number is greater than 0, it prints "Number is POSITIVE." If the number is less than 0, it prints "Number is NEGATIVE." If the number is equal to 0, it prints "Number is ZERO."

-Algorithm:

Start
Input number num
If num > 0, print "Positive"
Else if num < 0, print "Negative"
Else, print "Zero"
End

Program-2: To calculate average marks and display the Grade
This program accepts marks for five subjects, calculates the average, and assigns a grade based on the average score.

-The program takes input for five subjects: DCLD, NT, EDC, SnS, and MTT. -It calculates the average by adding all subject marks and dividing by 5. ->Based on the average, it assigns grades using if-else conditions as follows: O Grade: 90–100 A+ Grade: 80–89 A Grade: 70–79 B Grade: 60–69 C Grade: 50–59 FAIL: Below 50 ->If the calculated average is outside 0–100, it displays an error message to enter valid marks.

Algorithm:

Start.
Input marks for 5 subjects.
Calculate average = total / 5.
If average < 0 or > 100 → print "Invalid input"
Else if average > 90 → print "O Grade"
Else if average ≥ 81 → print "A+ Grade"
Else if average ≥ 71 → print "A Grade"
Else if average ≥ 61 → print "B Grade"
Else if average ≥ 51 → print "C Grade"
Else → print "Fail"

Program-3: Co-ordinate Quadrant
This program identifies the position of a point (x, y) in a 2D Cartesian coordinate system based on its x and y coordinates.

-The program takes two integer inputs: x-coordinate and y-coordinate. -It then uses if-else conditions to determine the point's location: 1st Quadrant: x > 0 and y > 0. 2nd Quadrant: x < 0 and y > 0. 3rd Quadrant: x < 0 and y < 0. 4th Quadrant: x > 0 and y < 0. On X-axis: y = 0 and x ≠ 0. On Y-axis: x = 0 and y ≠ 0. At Origin: x = 0 and y = 0. -The program prints the appropriate message indicating the point’s position.

Algorithm:

Start.
Input x and y.
If x > 0 and y > 0 → print "1st Quadrant"
Else if x < 0 and y > 0 → print "2nd Quadrant"
Else if x < 0 and y < 0 → print "3rd Quadrant"
Else if x > 0 and y < 0 → print "4th Quadrant"
Else if x == 0 and y != 0 → print "Y-axis"
Else if y == 0 and x != 0 → print "X-axis"
Else → print "Origin"
End.

Conclusion
Hence, we used Logical Operators and Relational Operators in the above 3 codes and executed the decision-making statements to get an accurate output.
