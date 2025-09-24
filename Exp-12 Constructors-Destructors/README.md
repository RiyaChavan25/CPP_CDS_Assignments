---

# **Constructors & Destructors in C++**

**Aim:** To study and implement **Constructors** and **Destructors** in C++.

**Tools Used:** VS Code or Programiz online compiler

---

## **Theory**

### **Constructors**

- A **constructor** is a special member function automatically invoked when an object is created.
- It **initializes data members** of the class.
- **Rules:** Same name as class, no return type.

#### **Types of Constructors**

1. **Default Constructor** – Takes no arguments, initializes objects with default values.
2. **Parameterized Constructor** – Takes arguments to initialize an object with specific values.
3. **Copy Constructor** – Creates a new object as a copy of an existing object.

**Example Syntax:**

```cpp
class Student {
    int age;
public:
    Student() { age = 18; }           // Default constructor
    Student(int a) { age = a; }       // Parameterized constructor
    Student(const Student &s) { age = s.age; }  // Copy constructor
};
```

---

### **Destructors**

- A **destructor** is automatically invoked when an object goes out of scope.
- **Purpose:** Free resources like memory, file handles, or database connections.
- **Rules:** Same name as class, preceded with `~`, no arguments, no return type.

**Example Syntax:**

```cpp
class Student {
public:
    ~Student() { cout << "Destructor called" << endl; }
};
```

---

## **Programs and Algorithms**

### **Program 1: Default Constructor**

- **Purpose:** Input marks at object creation.
- **Algorithm:**

1. Define class `Marks` with 5 integer subjects (`MTT, DCLD, EDC, NT, SS`).
2. Define a **default constructor** to input all marks.
3. Create object `m1`; constructor runs automatically.

---

### **Program 2: Constructor Outside Class**

- **Purpose:** Input marks using constructor, display using a separate function.
- **Algorithm:**

1. Define class `Marks` with 5 integer members.
2. Constructor inputs values for all marks.
3. Member function `display()` prints marks.
4. Create object `m1`, call `display()`.

---

### **Program 3: Parameterized Constructor**

- **Purpose:** Initialize object with specific values at creation.
- **Algorithm:**

1. Define class `Num` with two integers `num1, num2`.
2. Constructor `Num(int a, int b)` initializes variables.
3. Function `display()` prints values.
4. Create object `n1(23,78)` and call `display()`.

---

### **Program 4: Copy Constructor (2 numbers)**

- **Purpose:** Copy values from one object to another using copy constructor.
- **Algorithm:**

1. Define class `Num` with `num1, num2`.
2. Parameterized constructor initializes `n1`.
3. Copy constructor copies values to `n2`.
4. Display `n1` and `n2`.

---

### **Program 5: Copy Constructor (Book Details)**

- **Purpose:** Copy details of one object into another.
- **Algorithm:**

1. Define class `Book` with `b_name, b_auth, price`.
2. Parameterized constructor initializes `b1`.
3. Copy constructor duplicates `b1` into `b2`.
4. Function `display()` prints details.

---

### **Program 6: Destructor (Counting Cars)**

- **Purpose:** Demonstrate constructors/destructors with a **static counter**.
- **Algorithm:**

1. Global variable `count` tracks object count.
2. Class `Car`: constructor increments count, destructor decrements count.
3. Create objects `c1, c2, c3`.
4. Create block with `c4, c5`.
5. Observe constructors and destructors being called automatically.

---

### **Program 7: Destructor (Without Constructor)**

- **Purpose:** Observe destructor invocation for objects and temporary objects in a loop.
- **Algorithm:**

1. Define class `Date` with only destructor.
2. Create objects `d1, d2, d3, d4`.
3. In loop, create temporary object `d1`.
4. Destructor prints "Destructor Called" when objects go out of scope.

---

## **Conclusion**

These seven programs illustrate:

- Use of **default, parameterized, and copy constructors**
- **Automatic invocation** of constructors and destructors
- Difference between constructor input and destructor cleanup
- Scope and lifetime management of objects in C++

They provide a comprehensive understanding of **object lifecycle** in C++ and how constructors and destructors manage **initialization and cleanup**.
