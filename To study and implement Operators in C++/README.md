# **Experiment 3: C++ Operators**

---

### **Aim**

To study and implement **Operators in C++**.

---

### **Tools Used**

* Visual Studio Code
* Programiz Online Compiler

---

## **Theory**

Operators in C++ are **symbols or keywords** used to perform operations on variables and values. They help in forming expressions and evaluating results.

---

### **1. Arithmetic Operators**

Used to perform **mathematical operations**:

* `+` Addition
* `-` Subtraction
* `*` Multiplication
* `/` Division
* `%` Modulus

🔹 **Applications:** Basic calculations, finance, algorithms, etc.

---

### **2. Relational Operators**

Used to **compare** values and return a boolean result:

* `<`, `>`, `<=`, `>=`
* `==` Equal to
* `!=` Not equal to

🔹 **Applications:** Decision-making in `if`, `while`, `for`, etc.

---

### **3. Logical Operators**

Used to evaluate **boolean expressions**:

* `&&` Logical AND
* `||` Logical OR
* `!` Logical NOT

🔹 **Applications:** Multi-condition checks in decision-making.

---

## 💻 **Program 1: Positive, Negative or Zero Checker**

### **Description**

Checks whether a number entered by the user is **positive**, **negative**, or **zero**.

### **Algorithm**

1. Start
2. Input number `num`
3. If `num > 0` → Print "Positive"
4. Else if `num < 0` → Print "Negative"
5. Else → Print "Zero"
6. End

---

## **Program 2: Average Marks & Grade Calculator**

### **Description**

Takes marks of 5 subjects and assigns a **grade** based on the average.

### **Grading Criteria**

| Range  | Grade |
| ------ | ----- |
| 90–100 | O     |
| 81–89  | A+    |
| 71–80  | A     |
| 61–70  | B     |
| 51–60  | C     |
| < 50   | Fail  |

### **Algorithm**

1. Start
2. Input marks of 5 subjects
3. Compute `average = total / 5`
4. If `average < 0` or `average > 100` → Invalid
5. Else if `average >= 90` → O Grade
6. Else if `average >= 81` → A+ Grade
7. Else if `average >= 71` → A Grade
8. Else if `average >= 61` → B Grade
9. Else if `average >= 51` → C Grade
10. Else → Fail
11. End

---

## **Program 3: Coordinate Quadrant Finder**

### **Description**

Identifies the **position of a point** in the 2D coordinate plane based on `x` and `y` values.

### **Quadrant Logic**

* 1st Quadrant: `x > 0 && y > 0`
* 2nd Quadrant: `x < 0 && y > 0`
* 3rd Quadrant: `x < 0 && y < 0`
* 4th Quadrant: `x > 0 && y < 0`
* On X-axis: `y == 0 && x != 0`
* On Y-axis: `x == 0 && y != 0`
* At Origin: `x == 0 && y == 0`

### **Algorithm**

1. Start
2. Input `x`, `y`
3. Use conditions to check position
4. Print respective location
5. End

---

## **Conclusion**

We implemented **arithmetic, relational, and logical operators** through:

* Number classification
* Grade calculation
* Quadrant detection

These examples demonstrate **decision-making** using operator-based logic in C++.

