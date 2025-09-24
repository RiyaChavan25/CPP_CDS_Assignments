---

# **Overloading in C++**

## **Aim**

To study and implement types of **Overloading** in C++ (Function, Constructor, and Operator Overloading).

## **Tools Used**

VS Code or Programiz online compiler

---

## **Theory**

**Overloading** in C++ allows the same function or operator name to perform different operations based on input parameters. It improves **code readability**, **reusability**, and supports **compile-time polymorphism**.

### **Types of Overloading**

1. **Function Overloading:** Same function name, different parameter types or numbers.

   ```cpp
   returnType functionName(parameter_list1);
   returnType functionName(parameter_list2);
   ```

2. **Constructor Overloading:** Multiple constructors with different parameters to initialize objects in various ways.

   ```cpp
   class ClassName {
       public:
       ClassName();              // Default
       ClassName(int x);         // Parameterized
       ClassName(int x, int y);  // Overloaded
   };
   ```

3. **Operator Overloading:** Redefining operators like `+`, `*`, `==` for user-defined classes.

   ```cpp
   returnType operator op (parameter_list) {
       // operator logic
   }
   ```

---

## **Programs and Algorithms**

### **Program 1: Constructor Overloading (1st Code)**

- **Purpose:** Demonstrates multiple constructors for addition.
- **Class:** `Add` with three constructors:

  - Two integers
  - Two floats
  - Three integers

- **Algorithm:**

  1. Define class `Add` with three overloaded constructors.
  2. Create objects: `a1`, `a2`, `a3` with respective arguments.
  3. Each constructor computes and displays sum.

---

### **Program 2: Constructor Overloading (2nd Code)**

- **Purpose:** Demonstrates constructor overloading for **interest calculations**.
- **Class:** `Interest` with two constructors:

  - Integer inputs → Simple Interest
  - Double inputs → Compound Interest

- **Algorithm:**

  1. Define class `Interest` with two constructors.
  2. Create object `i1` with double arguments → calls compound interest constructor.
  3. Display calculated interest.

---

### **Program 3: Function Overloading**

- **Purpose:** Same function name works with **different data types**.
- **Class:** `Concat` with function `Concatenate`:

  - String parameters → concatenates strings
  - Char parameters → combines two characters into a string

- **Algorithm:**

  1. Define class `Concat` with two overloaded `Concatenate` functions.
  2. Create object `c`.
  3. Call `c.Concatenate("Nishka", "Ranadive")`.
  4. Call `c.Concatenate('N', 'R')`.
  5. Display both results.

---

### **Program 4: Operator Overloading (1st Code)**

- **Purpose:** Overloads `*` operator to compare volumes of two boxes.
- **Class:** `Box` with attributes: `length`, `width`, `height` and function `volume()`.
- **Algorithm:**

  1. Define class `Box` with constructor to initialize dimensions.
  2. Overload `*` operator to compare volumes.
  3. Create two objects `b1` and `b2`.
  4. Display their volumes.
  5. Compare using overloaded operator and print result.

---

### **Program 5: Operator Overloading (2nd Code)**

- **Purpose:** Overloads `+` operator to sum values of two objects.
- **Class:** `Number` with attribute: `value`.
- **Algorithm:**

  1. Define class `Number` with parameterized constructor.
  2. Overload `+` operator to add two objects.
  3. Define `display()` to print value.
  4. Create objects `n1` and `n2`, sum into `n3`.
  5. Display values of `n1`, `n2`, `n3`.

---

## **Conclusion**

These programs demonstrate **compile-time polymorphism** in C++:

- **Constructor Overloading:** Initialize objects differently (addition, interest).
- **Function Overloading:** Same function name works on different data types.
- **Operator Overloading:** User-defined classes can use operators naturally.

Overloading improves **flexibility**, **code reusability**, and **intuitive syntax**, making programs easier to read and maintain.

---
