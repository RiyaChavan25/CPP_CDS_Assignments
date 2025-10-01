---
# **Linked List in C++**
---

## **Aim**

To study and implement **Linked Lists** in C++.

---

## **Tools Used**

VS Code or Programiz online compiler.

---

## **Theory**

**Linked Lists in C++**
A linked list is a linear data structure where elements, called **nodes**, are connected through **pointers**. Each node typically contains:

- **Data** – the value of the node.
- **Pointer** – address of the next node.

Unlike arrays, linked lists are **not stored in contiguous memory locations**, making them more flexible as their size can grow or shrink dynamically at runtime.

**Types of Linked Lists:**

1. **Singly Linked List** – Nodes point only to the next node; traversal is one-way.
2. **Doubly Linked List** – Nodes have pointers to both next and previous nodes; traversal is bidirectional.
3. **Circular Singly Linked List** – Last node points back to the first node.
4. **Circular Doubly Linked List** – Last node’s next points to the first, and the first node’s previous points to the last.

Here, we focus on **Singly Linked Lists**.

---

## **Linked List Template**

```cpp
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() { head = nullptr; }

    // Insert at beginning
    void insertAtBeginning(int value);

    // Insert at end
    void insertAtEnd(int value);

    // Delete a node
    void deleteNode(int value);

    // Display list
    void display();

    // Destructor
    ~LinkedList();
};
```

---

## **Programs**

### **Program 1: Implementation of Node Structure**

Demonstrates a **single node creation** in a singly linked list.

**Algorithm:**

1. Define a `Node` class with:

   - Integer `val` for data.
   - Pointer `next` to point to the next node.

2. Create a constructor to initialize `val` and set `next = NULL`.
3. In `main()`:

   - Dynamically create a new node.
   - Assign value (e.g., 20).
   - Print the node’s `data` and its `next` pointer.

---

### **Program 2: Creation and Traversal of Singly Linked List**

Demonstrates **linking multiple nodes** and traversing them.

**Algorithm:**

1. Define a `Node` class with:

   - Integer `val` for data.
   - Pointer `next` for linking nodes.

2. In `main()`:

   - Dynamically create three nodes `n1`, `n2`, `n3` with values 10, 20, 30.
   - Link nodes: `n1->next = n2`, `n2->next = n3`.
   - Initialize a temporary pointer `temp = n1`.
   - While `temp != NULL`, print `temp->val` and move `temp = temp->next`.

3. End traversal.

---

### **Program 3: Insertion at Head in Singly Linked List**

Demonstrates **dynamic insertion at the beginning** of the list.

**Algorithm:**

1. Define a `Link` class with:

   - Integer `data` for value.
   - Pointer `next` to the next node.

2. Create a constructor to initialize `data` and set `next = NULL`.
3. To insert at head:

   - Dynamically create a new node with given value.
   - Set `new_node->next = head`.
   - Update `head = new_node`.

4. To display:

   - Initialize temporary pointer `temp = head`.
   - While `temp != NULL`, print `temp->data` and move `temp = temp->next`.

5. Repeat for each new element.

---

## **Conclusion**

These three programs illustrate the **fundamental operations** of singly linked lists in C++:

- **Program 1:** Node creation (basic building block).
- **Program 2:** Node linking and traversal (forming a list).
- **Program 3:** Dynamic insertion at the head (modifying the list structure).

Together, they provide a **clear understanding of node creation, list formation, traversal, and insertion**—essential for mastering singly linked lists.

---
