# Object-Oriented Programming in C++

## Aim

To study and implement **Classes** and **Objects** in C++ using basic examples.

## Tools Used

- **VS Code** or **Programiz Online Compiler**

---

## Theory

Object-Oriented Programming (OOP) in C++ is a programming paradigm that models real-world entities using **classes** and **objects**. A **class** acts as a blueprint, and **objects** are instances of the class.

### Key Features of OOP:

- **Encapsulation:** Wrapping data and functions together into a single unit.
- **Abstraction:** Showing only necessary details while hiding complexity.
- **Inheritance:** Reusing and extending existing class features.
- **Polymorphism:** Allowing objects or methods to behave differently depending on context.
- **Modularity & Reusability:** Breaking programs into independent parts for easy maintenance.

---

## Programs

### **Program 1: Student Details**

- **Purpose:** Demonstrates basic class creation and object instantiation.
- **Class:** `Student` with attributes: `name`, `branch`, `subject`, `year`, `result`.
- **Description:** Two students (`s1` and `s2`) are created with hardcoded details and displayed.

**Sample Output:**

```
1st Student:
Riya
E&TC
C++
First Year
9

2nd Student:
Varnika
E&TC
DSA
First Year
9
```

---

### **Program 2: Movie Details**

- **Purpose:** Similar to Program 1, stores and displays movie information.
- **Class:** `Movie` with attributes: `moviename`, `protaganist`, `antagonist`, `year`, `imdbrating`.
- **Description:** Two movie objects (`m1`, `m2`) are created, and their details are displayed.

**Sample Output:**

```
1st Movie:
Whiplash
Andrew Neiman
Terence Fletcher
2014
8.5

2nd Movie:
Blackswan
Nina Sayers
Lily
2010
8
```

---

### **Program 3: Circle Area Calculation**

- **Purpose:** Demonstrates a class with a **member function**.
- **Class:** `Circle` with attribute: `radius` and function `area()`.
- **Description:** Calculates area of a circle based on user input.

**Sample Output:**

```
Enter radius of the circle: 4
Area of Circle = 50.2654
```

---

### **Program 4: Simple Calculator**

- **Purpose:** Demonstrates multiple **member functions** in a class for arithmetic operations.
- **Class:** `Calculator` with attributes: `a`, `b`; functions: `add()`, `sub()`, `mul()`, `divi()`.
- **Description:** Performs addition, subtraction, multiplication, and division based on user input.

**Sample Output:**

```
Enter two numbers: 2 5
Addition: 7
Subtraction: -3
Multiplication: 10
Division: 0.4
```

---

### **Program 5: Cube Volume (Inside & Outside Class Function)**

- **Purpose:** Demonstrates member functions defined **inside** and **outside** a class.
- **Class:** `Cube` with attribute: `side` and functions: `volumeIn()` (inside), `volumeOut()` (outside).
- **Description:** Calculates cube volume using both function definitions.

**Sample Output:**

```
Enter side of cube: 3
Volume (inside of the method): 27
Volume (outside of the method): 27
```

---

### **Program 6: Cube Volume with Private Data Member**

- **Purpose:** Demonstrates **data encapsulation** with private members.
- **Class:** `cube` with private attributes: `height`, `width`, `length` and public function `volume()`.
- **Description:** Calculates cube volume using private dimensions.

**Sample Output:**

```
Volume: 30
```

---

## **Conclusion**

These programs cover the fundamentals of Object-Oriented Programming in C++, including:

- Class creation and object instantiation
- Public and private access specifiers
- Member functions defined inside and outside classes
- Data encapsulation
- Performing calculations using objects

Together, these examples provide a solid foundation for understanding how **OOP** concepts are implemented in C++.

---
