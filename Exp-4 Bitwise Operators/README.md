# **Exp 4: Bitwise Operators in C++**

---

## **Aim**

**To study and implement C++ Bitwise Operators**

---

## **Tools Used**

- VS Code
- Programiz Online Compiler

---

## **Theory**

Bitwise operators work directly on the binary digits (bits) of integer values, allowing programmers to manipulate data at its most fundamental level. These operators enable precise control over individual bits, making them particularly valuable for system-level programming, performance optimization, and hardware interaction.

The following examples showcase practical applications of different bitwise operations in C++.

---

## **Bitwise Operator Types**

- **Bitwise AND (&):** Performs a logical AND operation on each pair of corresponding bits
- **Bitwise OR (|):** Performs a logical OR operation on each pair of corresponding bits
- **Bitwise NOT (~):** Performs a logical NOT operation on each bit (flips all bits)
- **Bitwise XOR (^):** Performs an exclusive OR operation on each pair of corresponding bits
- **Left Shift (<<):** Shifts all bits to the left by the specified number of positions
- **Right Shift (>>):** Shifts all bits to the right by the specified number of positions

---

## **Bit Setting and Resetting**

### ➤ Setting a Bit (Bit ON)

- Formula: `value | (1 << position)`
- Creates a mask with 1 at target position
- OR operation flips only the specified bit to 1
- All other bits remain unchanged

### ➤ Clearing a Bit (Bit OFF)

- Formula: `value & ~(1 << position)`
- Generates an inverse mask with 0 at target position
- AND operation resets only the specified bit to 0
- Preserves all other bit values

---

## **Program-1: Bitwise Operation**

The program initializes two integer variables with distinct binary patterns:  
`x = 12` (binary: `1100`)  
`y = 5` (binary: `0101`)

These values are carefully selected to showcase the fundamental behavior of bitwise operators.

### ➤ Algorithm

1. Declare and set `x = 12`, `y = 5`
2. Compute and store these bitwise operations:
   - `x & y`
   - `x | y`
   - `~x`, `~y`
   - `x ^ y`
   - `x << 2`, `y << 2`
   - `x >> 2`, `y >> 2`
3. Output all computation results
4. End execution

---

## **Program-2: Set and Reset Bit**

The program starts by declaring an integer variable `value` and initializing it to `345` (binary: `101011001`).  
This demonstrates practical techniques for modifying individual bits.

### ➤ Algorithm

1. Initialize `value = 345`
2. Prompt user for bit position to set (0–31)
3. Perform bit-setting operation
4. Prompt user for bit position to clear (0–31)
5. Perform bit-clearing operation
6. Display original and modified values
7. End program

---

## **Conclusion**

Hence, we performed the **Bitwise Operations** on inputted numbers and successfully **set and reset specific bits** of a binary number.
