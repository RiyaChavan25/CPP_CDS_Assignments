---
# **Queue in C++**
---

## **Aim**

To study and implement **Queues** in C++.

---

## **Tools Used**

VS Code or Programiz online compiler.

---

## **Theory**

**Queues in C++**
A queue is a **linear data structure** that follows the **First-In-First-Out (FIFO)** principle. Elements are inserted at the **rear** and removed from the **front**. Queues are commonly used in:

- Scheduling systems
- Buffer management
- Resource sharing

In C++, queues can be implemented using:

- Arrays
- Linked Lists
- STL `queue` class

**Primary operations of a queue:**

1. **Enqueue:** Insert an element at the rear.
2. **Dequeue:** Remove an element from the front.
3. **Front/Rear access:** View the first and last elements.

Queues can be **fixed-size (static)** or **dynamic**, and variants include:

- Circular queues
- Priority queues
- Double-ended queues (`deque`)

Queues ensure **sequential processing** where the order of arrival is preserved.

---

## **Queue Template**

```cpp
#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    // Constructor
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value);

    // Dequeue operation
    void dequeue();

    // Display queue
    void display();

    // Check if queue is empty
    bool isEmpty();

    // Check if queue is full
    bool isFull();
};
```

---

## **Key Points**

- Traversal requires moving **sequentially from front to rear**.
- Dynamic queues **grow or shrink at runtime**, while static queues have a **fixed size**.

---

## **Program 1: Array-Based Implementation of Queue**

Demonstrates a queue implemented using a **fixed-size array**, following FIFO principles.

**Algorithm:**

1. Define a `Queue` class with:

   - Integer array `arr[SIZE]` to store elements.
   - Integers `front` and `rear` to track the first and last elements.

2. Initialize `front = -1` and `rear = -1` in the constructor.
3. **Enqueue operation:**

   - If `rear == SIZE - 1`, print `"Queue Overflow"`.
   - If `front == -1`, set `front = 0`.
   - Increment `rear` and store the value at `arr[rear]`.

4. **Dequeue operation:**

   - If `front == -1` or `front > rear`, print `"Queue Underflow"`.
   - Print `arr[front]` as removed element.
   - Increment `front`.

5. **Display operation:**

   - If `front == -1` or `front > rear`, print `"Queue is empty"`.
   - Else, traverse from `front` to `rear` and print elements.

---

## **Conclusion**

Queues are linear data structures following the **FIFO** principle.
Array-based queues allow **efficient insertion at rear** and **deletion from front**, though the size is fixed.
They are widely used in **scheduling, buffering, and sequential data processing**, helping manage data in an orderly and predictable manner.

---
