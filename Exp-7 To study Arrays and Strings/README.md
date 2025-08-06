# **Experiment: Arrays and Strings in C++**

---

## **Aim**

To study and implement C++ Arrays and Strings.

---

## ** Tools Used**

- **VS Code**
- **Programiz Online C++ Compiler**

---

## ** Theory**

### **Arrays in C++**

An array is a fixed-size collection of elements of the same data type stored in contiguous memory locations.

```cpp
data_type array_name[size];
```

- Fast access via indexing (starting from 0)
- Useful for storing and processing multiple values efficiently

---

### **Strings in C++**

A string is a sequence of characters used for storing and manipulating text.

```cpp
string str = "Hello";
```

- Flexible in size and easy to manipulate
- Allows operations like concatenation, comparison, length, etc.

---

## ** Programs and Algorithms**

---

### **Program 1: Declaring and Input-Output of Arrays**

_Takes subject marks as input and displays them._

**Algorithm:**

```
1. Start
2. Declare array to store marks
3. Input number of subjects
4. Loop i from 0 to n-1:
   - Take input of marks[i]
5. Loop i from 0 to n-1:
   - Print marks[i]
6. End
```

---

### **Program 2: Searching in Array**

_Searches for a mark value entered by user._

**Algorithm:**

```
1. Start
2. Input size of array (n)
3. Input array elements
4. Input value to search
5. Loop through array:
   - If element == search value: Print position, Exit
6. If not found: Print "Marks not found"
7. End
```

---

### **Program 3: Reversing the Array**

_Prints the array in reverse order._

**Algorithm:**

```
1. Start
2. Input array elements
3. Loop from last index to 0:
   - Print element
4. End
```

---

### **Program 4: Sum & Average of Marks**

_Calculates total and average of marks._

**Algorithm:**

```
1. Start
2. Initialize sum = 0
3. Loop through array:
   - Add each element to sum
4. average = sum / number of elements
5. Print sum and average
6. End
```

---

### **Program 5: Minimum and Maximum of Marks**

_Finds minimum and maximum mark using sorting._

**Algorithm:**

```
1. Start
2. Input marks in array
3. Sort array in descending order
4. max = first element, min = last element
5. Print min and max
6. End
```

---

### **Program 6: Taking Input & Output for Strings**

_Takes a string as input and displays it._

**Algorithm:**

```
1. Declare string variable
2. Input string from user
3. Print the string
```

---

### **Program 7: Concatenating Strings**

_Concatenates two input strings._

**Algorithm:**

```
1. Declare two string variables
2. Input both strings
3. Concatenate using + operator
4. Print the result
```

---

### **Program 8: Reversing a String**

_Reverses a string using loop._

**Algorithm:**

```
1. Input string
2. Loop from end to start:
   - Append to new string
3. Print reversed string
```

---

### **Program 9: Palindrome Check**

_Checks if the input string is a palindrome._

**Algorithm:**

```
1. Input string
2. Reverse the string
3. If original == reversed:
   - Print "Palindrome"
   - Else Print "Not a Palindrome"
4. End
```

---

## **Conclusion**

We successfully implemented arrays and strings in C++. We learned:

- Input/output of arrays and strings
- Searching, reversing, and sorting arrays
- Concatenating and reversing strings
- Checking for palindromes
- Finding min, max, sum, and average in arrays

---
