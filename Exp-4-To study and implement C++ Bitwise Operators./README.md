# **Experiment 4: Bitwise Operators in C++**

---

### **Aim**

To study and implement **C++ Bitwise Operators**.

---

### **Tools Used**

* VS Code
* Programiz Online Compiler

---

## **Theory**

Bitwise operators allow operations directly on the **binary representation** of integers. These are crucial for **low-level programming**, **memory-efficient code**, and **hardware-level manipulation**.

---

### **Types of Bitwise Operators**

| Operator | Name        | Description                                  |                                       |
| -------- | ----------- | -------------------------------------------- | ------------------------------------- |
| `&`      | Bitwise AND | Logical AND between corresponding bits       |                                       |
| \`       | \`          | Bitwise OR                                   | Logical OR between corresponding bits |
| `~`      | Bitwise NOT | Flips all bits (1 to 0, and 0 to 1)          |                                       |
| `^`      | Bitwise XOR | Exclusive OR between bits (1 if different)   |                                       |
| `<<`     | Left Shift  | Shifts bits to the left by a specific count  |                                       |
| `>>`     | Right Shift | Shifts bits to the right by a specific count |                                       |

---

### **Bit Setting and Resetting**

* **Set Bit (Turn ON)**

  ```
  value | (1 << position)
  ```

  Sets the bit at the given position to **1**.

* **Reset Bit (Turn OFF)**

  ```
  value & ~(1 << position)
  ```

  Clears the bit at the given position (sets it to **0**).

---

## **Program 1: Bitwise Operations**

### **Example**

```cpp
int x = 12; // Binary: 1100
int y = 5;  // Binary: 0101
```

### **Operations Performed**

* Bitwise AND: `x & y`
* Bitwise OR: `x | y`
* Bitwise NOT: `~x`, `~y`
* Bitwise XOR: `x ^ y`
* Left Shift: `x << 2`, `y << 2`
* Right Shift: `x >> 2`, `y >> 2`

### **Algorithm**

1. Declare and initialize `x = 12`, `y = 5`
2. Perform:

   * `AND`, `OR`, `NOT`, `XOR`
   * `Left shift`, `Right shift`
3. Output all results
4. End program

---

## **Program 2: Bit Set and Reset**

### **Goal**

Demonstrate how to **turn on** and **turn off** specific bits in a number.

```cpp
int value = 345; // Binary: 101011001
```

### **Operations**

#### **Set a Bit**

```cpp
value | (1 << position)
```

#### **Reset a Bit**

```cpp
value & ~(1 << position)
```

### **Algorithm**

1. Initialize: `value = 345`
2. Input bit position to **set**
3. Perform `Set Bit` operation
4. Input bit position to **reset**
5. Perform `Clear Bit` operation
6. Display original and final results
7. End program

---

## **Conclusion**

Hence, we successfully:

* Performed **bitwise operations** on integer values
* Implemented logic to **set** and **reset** individual bits in a binary number

This experiment reinforces understanding of how **binary manipulation** is used in real-world programming scenarios like **microcontroller programming**, **data compression**, and **encryption algorithms**.


