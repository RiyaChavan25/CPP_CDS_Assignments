# 🧮 Experiment 22: Algorithm Analysis using Big O Notation

---

## 📌 **Aim**

To study and analyze the performance of different algorithms using _Big O Notation_ and to compare their time complexities in various cases (best, average, and worst).

---

## 🎯 **Objectives**

1. To understand the concept of **algorithm complexity**.
2. To differentiate between **time complexity** and **space complexity**.
3. To implement and analyze the performance of **searching and sorting algorithms** in C++.
4. To express algorithm efficiency in terms of **asymptotic notations** (Big O, Big Ω, and Big Θ).
5. To observe and compare the **growth rates** of different algorithms experimentally.

---

## 📖 **Theory**

### 🔹 **What is an Algorithm?**

An _algorithm_ is a finite set of well-defined steps to solve a specific problem.
While correctness ensures that the algorithm produces the right output, **efficiency** ensures that it does so in _minimum time_ and with _optimal resource usage_.

Example:

- **Linear Search** checks every element one by one → _O(n)_
- **Binary Search** repeatedly divides the list → _O(log n)_

Thus, Binary Search is much faster for large inputs.

---

### 🔹 **Algorithm Analysis**

Algorithm analysis helps in evaluating the performance of an algorithm independent of hardware and software environments.

Two major aspects of algorithm analysis are:

1. **Time Complexity** – Measures the number of basic operations an algorithm performs as input size `n` increases.

   - Example: For Linear Search, in the worst case, the algorithm checks all `n` elements → _O(n)_.

2. **Space Complexity** – Measures the total memory required by the algorithm for its execution, including input storage, temporary variables, and recursion stack.

By analyzing algorithms, we can predict their scalability and select the most efficient one for a given problem.

---

### 🔹 **Asymptotic Notations**

Asymptotic notations describe how the runtime of an algorithm changes as the input size grows.

| Notation          | Description                                                   | Example                        |
| ----------------- | ------------------------------------------------------------- | ------------------------------ |
| **Big O (O)**     | Represents the **upper bound** or **worst-case** growth rate. | Bubble Sort → _O(n²)_          |
| **Big Omega (Ω)** | Represents the **lower bound** or **best-case** growth rate.  | Bubble Sort best case → _Ω(n)_ |
| **Big Theta (Θ)** | Represents the **tight bound** (average case).                | Insertion Sort → _Θ(n²)_       |

In this experiment, our focus is primarily on **Big O notation** to represent _worst-case performance_.

---

### 🔹 **Common Time Complexities**

| Complexity     | Name          | Example                        |
| -------------- | ------------- | ------------------------------ |
| **O(1)**       | Constant Time | Accessing array element        |
| **O(log n)**   | Logarithmic   | Binary Search                  |
| **O(n)**       | Linear        | Linear Search                  |
| **O(n log n)** | Linearithmic  | Merge Sort, Quick Sort         |
| **O(n²)**      | Quadratic     | Bubble Sort, Insertion Sort    |
| **O(2ⁿ)**      | Exponential   | Recursive Fibonacci            |
| **O(n!)**      | Factorial     | Traveling Salesman brute force |

---

### 🔹 **Big O Notation Graphical Growth**

As the input size `n` increases:
[
O(1) < O(\log n) < O(n) < O(n \log n) < O(n^2) < O(2^n) < O(n!)
]

Hence, algorithms with **O(log n)** or **O(n log n)** are preferred for large datasets.

---

## 🧠 **Algorithm Implementations**

### **1. Linear Search – O(n)**

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // element found
    }
    return -1; // element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5, key = 8;
    int result = linearSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    return 0;
}
```

- **Best Case:** O(1) → element found at first position.
- **Worst Case:** O(n) → element not present or at last position.

---

### **2. Binary Search – O(log n)**

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5, key = 8;
    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    return 0;
}
```

- **Best Case:** O(1) → element is at the middle.
- **Worst Case:** O(log n) → requires repeated halving.

---

### **3. Bubble Sort – O(n²)**

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = 5;
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
```

- **Best Case:** O(n) → already sorted array.
- **Worst Case:** O(n²) → reverse order input.

---

### **4. Merge Sort – O(n log n)**

```cpp
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
```

- **Best Case:** O(n log n)
- **Worst Case:** O(n log n)

---

## 📊 **Observation Table**

| Algorithm     | Best Case  | Average Case | Worst Case | Big O Notation |
| ------------- | ---------- | ------------ | ---------- | -------------- |
| Linear Search | O(1)       | O(n/2)       | O(n)       | O(n)           |
| Binary Search | O(1)       | O(log n)     | O(log n)   | O(log n)       |
| Bubble Sort   | O(n)       | O(n²)        | O(n²)      | O(n²)          |
| Merge Sort    | O(n log n) | O(n log n)   | O(n log n) | O(n log n)     |

---

## 📈 **Growth Rate Comparison**

| Algorithm     | Growth Pattern            | Efficiency                  |
| ------------- | ------------------------- | --------------------------- |
| Linear Search | Increases linearly with n | Moderate for small datasets |
| Binary Search | Grows logarithmically     | Excellent for sorted data   |
| Bubble Sort   | Grows quadratically       | Poor for large inputs       |
| Merge Sort    | Grows linearithmically    | Best for large inputs       |

---

### **Graphical Observation**

If plotted, the runtime curve would follow this trend:
**O(1) < O(log n) < O(n) < O(n log n) < O(n²)**

This clearly demonstrates that _Merge Sort_ and _Binary Search_ outperform the others as input size grows.

---

## ✅ **Result**

The performance of various algorithms was analyzed and compared using Big O notation.
It was observed that:

- **Binary Search** performs significantly faster than Linear Search for sorted data.
- **Merge Sort** is highly efficient and consistent across all cases.
- **Bubble Sort** is inefficient for large datasets due to its quadratic growth.
- Big O notation effectively describes algorithm performance independent of hardware.

Thus, algorithmic efficiency directly influences real-world application performance.

---

## 🔎 **Conclusion**

From this experiment, we conclude that:

1. **Big O notation** provides a standardized method to represent algorithm efficiency and scalability.
2. The choice of algorithm greatly impacts system performance — efficient algorithms (O(log n), O(n log n)) reduce execution time and computational cost.
3. Algorithms like **Merge Sort** and **Binary Search** are optimal for large-scale problems, while **Bubble Sort** or **Linear Search** are suited for small datasets.
4. **Algorithm analysis** allows developers to select the right approach before implementation, improving software design and resource utilization.
5. In practice, trade-offs between time, space, and simplicity must be considered when choosing algorithms.

Hence, _algorithm analysis using Big O notation is fundamental in computer science for evaluating performance, predicting scalability, and ensuring efficiency._

---
