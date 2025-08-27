# Pointer Operations in C++

**Aim:** To study and implement Pointer Operations (Call by Value and Call by Reference).

**Tools Used:** VS Code or Programiz Online Compiler.

---

## Theory

A **pointer** in C++ is a variable that stores the **memory address** of another variable. It allows **direct access and manipulation** of the data stored at that address.

### Key Features

- **Storage of Address:** A pointer stores the memory location (address) of a variable rather than the value itself.
- **Indirect Access:** By dereferencing a pointer (using `*`), you can access or modify the value stored at the address it points to.
- **Flexibility:** Pointers enable dynamic memory allocation, array handling, passing large data efficiently, and implementing call by reference.

---

## Parameter Passing Techniques

### 1. Pass by Value

In pass by value, a **copy** of the actual argument’s value is passed to the function. Changes inside the function **do not affect** the original variable.

```cpp
return_type function_name(data_type parameter) {
    // function body
}

int main() {
    data_type variable = value;
    function_name(variable);
}
```

---

### 2. Pass by Reference

In pass by reference, the function receives the **actual variable itself** (through an alias). Changes inside the function **affect the original variable**.

```cpp
return_type function_name(data_type &parameter) {
    // function body
}

int main() {
    data_type variable = value;
    function_name(variable);
}
```

---

### 3. Pass by Pointer

In pass by pointer, the function receives the **memory address** of the variable. By dereferencing the pointer, the function can directly modify the original variable's value.

```cpp
return_type function_name(data_type *parameter) {
    // function body
}

int main() {
    data_type variable = value;
    function_name(&variable);
}
```

---

## Programs

### Program-1: Swapping Numbers by Pass by Value

**Description:** Demonstrates Pass by Value. Swapping is done on copies, so original variables remain unchanged.

**Algorithm:**

1. Declare two integer variables `a` and `b` with initial values (e.g., 5 and 10).
2. Call `swap` function with `a` and `b` as arguments.
3. Inside `swap`, interchange values using a temporary variable.
4. Display `a` and `b` in `main()` (values remain unchanged).

---

### Program-2: Swapping Numbers by Pass by Pointer

**Description:** Demonstrates Pass by Pointer. The swap function modifies the original variables by using their addresses.

**Algorithm:**

1. Declare two integer variables `a` and `b`.
2. Display values of `a` and `b` before swapping.
3. Call `swap` function, passing addresses of `a` and `b`.
4. Inside `swap`:

   - Store `*x` in a temporary variable.
   - Assign `*y` to `*x`.
   - Assign temp to `*y`.

5. Display swapped values in `main()`.

---

### Program-3: Swapping Numbers by Pass by Reference

**Description:** Demonstrates Pass by Reference. The function swaps original variables directly.

**Algorithm:**

1. Declare two integer variables `a` and `b`.
2. Display values before swapping.
3. Call `swap` function with `a` and `b`.
4. Inside `swap`:

   - Store `x` in temporary variable.
   - Assign `y` to `x`.
   - Assign temp to `y`.

5. Display swapped values in `main()`.

---

### Program-4: Salary Incrementation

**Description:** Calculates an employee’s salary increment based on performance conditions using **pass by reference** or **pass by value**.

**Algorithm:**

1. Declare variables: `proj`, `pub`, `prof`, `new_proj`, `salary`.
2. Take input for all variables.
3. Check performance conditions (e.g., `proj > 0 && prof > 100000 && new_proj > 0`).
4. If conditions met, call `increment_ref(salary)` → increases salary by 20%.
5. Else, call `increment_val(salary)` → no change because it's pass by value.
6. Display final salary.

---

### Program-5: Changing Array

**Description:** Demonstrates modifying array elements using **pass by reference**.

**Algorithm:**

1. Declare two integer arrays: `arr[5] = {1,2,3,4,5}` and `arr1[5] = {2,4,6,8,10}`.
2. Define `change_val(int &x, int val)` → updates `x = val`.
3. Display original array.
4. Call `change_val` for each element of `arr`, setting them to `1000`.
5. Display updated array.

---

## Conclusion

These programs demonstrate **different parameter passing techniques in C++**:

- **Pass by Value:** Operates on a copy → original data unchanged.
- **Pass by Pointer & Reference:** Modify original variable → changes persist.

Applications include swapping numbers, incrementing salaries, and modifying arrays. Pass by value is safe but non-persistent; pointers and references are efficient for in-place updates.

---
