# Pointers in C++

**Aim:** To study and implement C++ Pointer basics.

**Tools Used:** VS Code or Programiz Online Compiler.

---

## Theory

Pointers in C++ are variables that hold **memory addresses** of other variables, providing direct access to memory locations. They enable efficient manipulation of data structures and memory through **address arithmetic**. Pointers are commonly used for array traversal, function arguments, and building data structures like **linked lists**.

**Declaration:**

```cpp
type* pointer_name;  // Example: int* ptr;
```

**Initialization:**

```cpp
type* pointer = &variable;  // Example: int* p = &x;
```

### Key Features

- **Memory Address Storage:** Pointers store memory addresses of variables, enabling direct access to data locations.
- **Dereferencing:** Using the `*` operator, pointers retrieve or modify the value stored at their memory address.
- **Pointer Arithmetic:** Supports operations like `++`, `--`, `+`, `-` to traverse memory (useful for arrays).
- **Dynamic Memory Handling:** Enable efficient memory management (e.g., resizing data structures at runtime).

---

## Program-1: Incrementing Pointers

**Description:** Demonstrates pointer arithmetic. Incrementing a pointer (`ptr++`) advances it by the size of its data type (e.g., `int*` moves by 4 bytes, `double*` by 8 bytes).

**Algorithm:**

1. Initialize variables of different data types (`int`, `float`, `double`, `bool`).
2. Declare pointers for each data type and assign variable addresses using `&` operator.
3. Display original memory addresses stored in each pointer.
4. Increment each pointer using `++` operator.
5. Print updated memory addresses showing type-dependent address shifts.
6. Observe how different pointer types advance by different byte sizes.

---

## Program-2: Difference Between Two Pointers

**Description:** Demonstrates pointer subtraction. Calculates the difference between values pointed to by two pointers in an array.

**Algorithm:**

1. Declare and initialize an integer array `arr` with 5 elements: `{10, 20, 30, 40, 50}`.
2. Create two pointers:

   - `p1` pointing to `arr[2]` (value 30)
   - `p2` pointing to `arr[4]` (value 50)

3. Calculate difference between dereferenced pointer values: `diff = *p2 - *p1`.
4. Display result.
5. End program.

---

## Program-3: Reversing an Array Using Pointers

**Description:** Reverses an array using pointer arrays.

**Algorithm:**

1. Initialize an integer array `arr` with 5 elements: `{10, 20, 30, 40, 50}`.
2. Declare an array of integer pointers `arrp[5]` and a reversed array `arr_rev[5]`.
3. Store addresses of `arr` elements in `arrp` using a loop: `arrp[i] = &arr[i]`.
4. Reverse elements by dereferencing pointers in reverse order: `arr_rev[i] = *arrp[4-i]`.
5. Display original array.
6. Display reversed array.
7. End program.

---

## Program-4: String Input & Output Using Pointers

**Description:** Demonstrates string manipulation using pointers.

**Algorithm:**

1. Declare a string variable `str1` initialized as empty.
2. Prompt user to input a string value and store it in `str1`.
3. Create a string pointer `str_ptr`.
4. Assign address of `str1` to `str_ptr` using `&` operator.
5. Display the string by dereferencing the pointer: `*str_ptr`.
6. End program.

---

## Conclusion

This repository demonstrates core **pointer operations** in C++ through four practical programs. The examples cover:

- Pointer arithmetic
- Array element differencing
- Array reversal using pointer arrays
- String access via pointers

Each program illustrates how pointers enable **efficient memory manipulation** and **direct data access**, providing a clear foundation for understanding **low-level memory management** in C++.

---
