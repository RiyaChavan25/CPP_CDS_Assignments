# **Experiment 2: C++ Program Structure (Data Types)**

---

### **Aim**

To study and implement C++ program structure using different **data types**.

---

### **Tools Used**

* VS Code
* Programiz Online C++ Compiler

---

## **Theory**

This program demonstrates the use of fundamental C++ data types:

* `int`
* `float`
* `char`
* `double`
* `string`
* `bool`

The program:

* Accepts user inputs for each type
* Displays the entered value
* Shows memory size using the `sizeof()` operator

---

### **Data Types Overview**

#### 🔹 **Integer (`int`)**

* Stores whole numbers (e.g., 42)
* Occupies 4 bytes
* Range: \~ -2.1 billion to +2.1 billion

#### 🔹 **Float (`float`)**

* Stores decimal numbers (e.g., 3.14)
* Occupies 4 bytes
* Precision: \~6–7 digits

#### 🔹 **Character (`char`)**

* Stores a single ASCII character (e.g., `A`)
* Occupies 1 byte

#### 🔹 **Double (`double`)**

* Stores high-precision decimal values (e.g., 3.1415926535)
* Occupies 8 bytes
* Precision: \~15–16 digits

#### 🔹 **String (`string`)**

* Stores a sequence of characters (e.g., "Hello")
* Typically uses 24 bytes as object size (content size varies)

#### 🔹 **Boolean (`bool`)**

* Stores truth values (`true` or `false`)
* Occupies 1 byte
* Input as 1 (true) or 0 (false)

---

## **Key Concepts**

1. **`sizeof()` Operator**
   Measures memory (in bytes) occupied by a variable or data type.

2. **Data Representation**
   Understand how each data type behaves in terms of input/output and storage.

3. **User Interaction**
   Inputs taken using `cin` and displayed using `cout`.

---

## **Program Structure**

The program includes:

* `#include <iostream>` for input/output
* `#include <string>` for string manipulation
* `using namespace std;` to avoid `std::` prefix

---

## **Algorithm**

### **Start the Program**

#### 1. **Integer (int)**

* Declare variable `a`
* Prompt: `Enter integer number:`
* Input: `cin >> a;`
* Output: `Value and sizeof(a)`

#### 2. **Float (float)**

* Declare variable `b`
* Prompt: `Enter floating number:`
* Output: `Value and sizeof(b)`

#### 3. **Character (char)**

* Declare variable `c`
* Prompt: `Enter Character:`
* Output: `Value and sizeof(c)`

#### 4. **Double (double)**

* Declare variable `e`
* Prompt: `Enter double number:`
* Output: `Value and sizeof(e)`

#### 5. **String (string)**

* Declare variable `f`
* Prompt: `Enter String:`
* Output: `Value and sizeof(f)`

#### 6. **Boolean (bool)**

* Declare variable `d`
* Prompt: `Enter Boolean value:`
* Output: `Value and sizeof(d)`

### **End the Program**

---

## **Conclusion**

Hence, we successfully implemented a C++ program to explore various **data types** and observed the **memory size** each occupies using the `sizeof()` operator. This forms a strong foundation for understanding variable storage and usage in real-world C++ applications.

