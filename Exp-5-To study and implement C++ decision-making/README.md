# **Experiment 5: C++ Decision Making Statements**

---

### **Aim**

To study and implement **C++ decision making statements**.

---

### **Tools Used**

* VS Code
* Programiz Online Compiler

---

## **Theory**

Conditional statements allow programs to **make decisions** based on **boolean conditions** (true/false). The three main structures are:

* **`if-else`** – Two-way decision-making
* **`nested if-else`** – Multi-level conditional logic
* **`switch-case`** – Efficient selection from multiple constant options

These structures enable:

* User input validation
* ⚠Error handling
* Multi-path logic execution

---

### **1. if-else Statement**

* Executes one block if the condition is **true**, another if **false**
* Syntax:

```cpp
if (condition) {
    // true block
} else {
    // false block
}
```

---

### **2. Nested if-else Statement**

* Conditional logic **within** another `if` or `else` block
* Ideal for **hierarchical** or **multi-condition** decisions
* Be cautious: **too much nesting reduces readability**

---

### **3. switch-case Statement**

* Checks a single expression against multiple **constant values**
* Efficient alternative to long `if-else` chains
* Uses `break` to avoid fall-through; `default` for unmatched cases

---

## **Program 1: Even/Odd Number Checker**

### Description

Checks if a number is **even** or **odd** using the modulus operator `%`.

### **Algorithm**

1. Start
2. Input an integer `num`
3. If `num % 2 == 0` → Print "Even"
4. Else → Print "Odd"
5. End

---

## **Program 2: Vowel/Consonant Checker**

### Description

Identifies whether a character is a **vowel** or **consonant** (case-insensitive).

### **Algorithm**

1. Start
2. Input a character `ch`
3. If `ch` is in `{A, E, I, O, U, a, e, i, o, u}` → Print "Vowel"
4. Else → Print "Consonant"
5. End

---

## **Program 3: Largest of Three Numbers**

### Description

Compares three numbers and prints the **largest** using **nested if-else**.

### **Algorithm**

1. Start
2. Input numbers `a`, `b`, `c`
3. If `a > b && a > c` → Print "a is largest"
4. Else if `b > c` → Print "b is largest"
5. Else → Print "c is largest"
6. End
   
---

## **Program 4: Movie Rater**

### Description

Uses `switch-case` to display **movie ratings** based on user's choice (1-4).

### **Algorithm**

1. Start
2. Display 4 movie options
3. Input `choice` (1-4)
4. Use `switch(choice)`

   * Case 1: Inception
   * Case 2: Titanic
   * Case 3: The Matrix
   * Case 4: Mean Girls
   * Default: "Invalid choice"
5. End

---

## **Program 5: Simple Calculator**

### Description

Simulates a **calculator** with basic arithmetic operations.

### **Algorithm**

1. Start
2. Input two numbers `a` and `b`
3. Display menu: `+`, `-`, `*`, `/`
4. Input user choice
5. Use `switch` to compute result

   * If `/` and `b == 0` → Print "Cannot divide by zero"
   * If invalid operator → Print "Invalid operation"
6. Print result
7. End

---

## **Conclusion**

Hence, we implemented various **decision-making statements** including:

* `if-else` and `nested if-else` for **logical branching**
* `switch-case` for **menu-driven programs**

These structures improve **code clarity**, **modularity**, and **user interactivity** in real-world C++ applications.

