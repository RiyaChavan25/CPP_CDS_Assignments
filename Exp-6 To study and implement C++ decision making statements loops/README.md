# Experiment 6: **Loops in C++**

---

## **Aim**

To study and implement C++ loops and their applications.

---

## **Tools Used**

- Visual Studio Code (VS Code)
- Programiz Online C++ Compiler

---

## **Theory**

Loops in C++ automate repetitive tasks, making code more efficient and concise.

### Types of Loops:

#### **for Loop**

Used when the number of iterations is **known**.

**Syntax:**

```cpp
for (initialization; condition; increment/decrement) {
    // code
}
```

- **Initialization** – Starting point
- **Condition** – Loop continues while true
- **Increment/Decrement** – Updates each iteration

#### **while Loop**

Used when the number of iterations is **unknown**.

**Syntax:**

```cpp
while (condition) {
    // code
}
```

- Useful for dynamic inputs or file processing.
- Must include manual increment/decrement to avoid infinite loops.

#### **Nested for Loop**

Used for multi-level iterations (e.g., 2D arrays, pattern printing).

**Syntax:**

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        // code
    }
}
```

---

## **Pattern Printing**

Pattern printing utilizes **nested loops** to generate visual patterns using `*`, numbers, or characters.

### Common Patterns:

- Simple Triangle
- Inverted Triangle
- Flipped Triangle
- Pyramid
- Floyd’s Triangle
- Hourglass

---

## 🧠 **Programs & Algorithms**

---

### 🔹 **Program 1: Print Even Numbers (0–10)**

**Loop:** `for`
**Logic:** Print numbers divisible by 2 between 0–10.

**Algorithm:**

1. Start
2. Loop from 0 to 10
3. If `i % 2 == 0`, print `i`
4. End

---

### 🔹 **Program 2: Print a Word 5 Times**

**Loop:** `for`
**Logic:** Repeat `"SIT"` five times.

**Algorithm:**

1. Start
2. Loop from 0 to 4
3. Print `"SIT"`
4. End

---

### 🔹 **Program 3: Print Numbers 1–20**

**Loop:** `while`
**Logic:** Use `while` loop to print numbers.

**Algorithm:**

1. Start, `n = 1`
2. While `n <= 20`:

   - Print `n`
   - Increment `n`

3. End

---

### 🔹 **Program 4: Password Checker**

**Loop:** `while`
**Logic:** Loop until correct password is entered or user exits.

**Algorithm:**

1. Prompt user to enter a password
2. Ensure it's at least 8 characters
3. Confirm password matches
4. Loop for login attempts:

   - If password matches, grant access
   - Else retry or exit with 'x'

5. End

---

### 🔹 **Program 5: Reverse a Number**

**Loop:** `while`
**Logic:** Use modulo and division to reverse digits.

**Algorithm:**

1. Input a number
2. While number > 0:

   - Extract last digit (`% 10`)
   - Print digit
   - Remove digit (`/ 10`)

3. End

---

## **Nested Loop Programs**

### 🔹 **Demo: Outer & Inner Loop Execution**

Prints `(i, j)` pairs for outer (1–2) and inner (1–3).

**Algorithm:**

1. Outer loop (1 to 2)
2. Inner loop (1 to 3)
3. Print i and j

---

## **Pattern Programs**

---

### 🔹 **1. Simple Pyramid**

```plaintext
*
* *
* * *
```

**Algorithm:**

- Loop rows `i = 1 to n`
- Inner loop `j = 1 to i` print `*`

---

### 🔹 **2. Flipped Pyramid**

```plaintext
    *
   * *
  * * *
```

**Algorithm:**

- Loop rows `i = 1 to n`
- Print `n-i` spaces
- Print `i` stars

---

### 🔹 **3. Inverted Pyramid**

```plaintext
* * *
* *
*
```

**Algorithm:**

- Loop `i = 1 to n`
- Loop `j = i to n`
- Print `*`

---

### 🔹 **4. Floyd’s Triangle**

```plaintext
1
2 3
4 5 6
```

**Algorithm:**

- Set `c = 1`
- Loop `i = 1 to n`
- Inner loop `j = 1 to i`
- Print and increment `c`

---

### 🔹 **5. Floyd’s Triangle**

```plaintext
A
B C
D E F
```

**Algorithm:**

- Set `ch = 'A'`
- Loop `i = 1 to n`
- Inner loop `j = 1 to i`
- Print and increment `ch`

---

### 🔹 **6. Hourglass Pattern**

**Logic:** Combines inverted and upright pyramids.

**Algorithm:**

- Loop for top half (decreasing)
- Loop for bottom half (increasing)
- Use spaces and stars accordingly

---

## **Conclusion**

Hence, we studied and implemented **for**, **while**, and **nested loops**, practiced number/word printing, and built **various pattern programs** in C++ for a better understanding of iterative control flow.

---
