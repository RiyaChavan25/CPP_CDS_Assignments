---

# Multidimensional Arrays in C++

**Aim:** To study and implement C++ 2D Arrays (Matrices).

**Tools Used:** VS Code or Programiz Online Compiler.

---

## Theory

Multidimensional arrays in C++ are arrays that contain other arrays, allowing data to be structured in multiple dimensions, such as 2D (matrices) or 3D (volumetric data).

They are declared using nested brackets:

```cpp
type array_name[size1][size2]...[sizeN];
```

- **Storage:** Contiguous memory (row-major order)
- **Access:** Nested indexing (e.g., `arr[i][j]`)
- **Initialization example:**

```cpp
int arr[2][2] = {{1, 2}, {3, 4}};
```

### Features of Multidimensional Arrays

- Fixed-size, contiguous memory blocks.
- Zero-based indexing.
- Homogeneous data type (all elements must be the same type).

---

## Programs

### **Program 1: 2-D Array Input and Display**

**Aim:** Input elements of a matrix and display them.

**Algorithm:**

1. Initialize a 2D integer matrix.
2. Input all matrix elements row-wise using nested loops.
3. Display the matrix with proper alignment.

**Code Placeholder:**

```cpp
// Program 1: Input and display 2D array
#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    // Input and output logic here
}
```

---

### **Program 2: Addition of Two 2-D Arrays**

**Aim:** Add two matrices of the same dimensions.

**Algorithm:**

1. Input rows and columns for both matrices.
2. Verify dimensions match.
3. Input elements of both matrices.
4. Compute sum element-wise.
5. Display original matrices and the result.

**Code Placeholder:**

```cpp
// Program 2: Addition of 2D arrays
#include <iostream>
using namespace std;

int main() {
    // Input, addition, and display logic here
}
```

---

### **Program 3: Multiplication of Two 2-D Arrays**

**Aim:** Multiply two compatible matrices.

**Algorithm:**

1. Input rows and columns for both matrices.
2. Verify multiplication condition (cols of first = rows of second).
3. Input elements of both matrices.
4. Multiply using triple nested loops.
5. Display the product matrix.

**Code Placeholder:**

```cpp
// Program 3: Multiplication of 2D arrays
#include <iostream>
using namespace std;

int main() {
    // Input, multiplication, and display logic here
}
```

---

### **Program 4: Sum of Diagonal Elements**

**Aim:** Calculate sum of main diagonal elements of a square matrix.

**Algorithm:**

1. Input rows and columns, and check if the matrix is square.
2. Input matrix elements.
3. Sum elements where row index = column index.
4. Display sum or error if not square.

**Code Placeholder:**

```cpp
// Program 4: Sum of diagonal elements
#include <iostream>
using namespace std;

int main() {
    // Input and diagonal sum logic here
}
```

---

### **Program 5: Transpose of 2-D Array**

**Aim:** Find transpose of a matrix.

**Algorithm:**

1. Input rows and columns.
2. Input matrix elements.
3. Generate transpose by swapping indices.
4. Display original and transposed matrices.

**Code Placeholder:**

```cpp
// Program 5: Transpose of 2D array
#include <iostream>
using namespace std;

int main() {
    // Input and transpose logic here
}
```

---

### **Program 6: Comparing Two 2-D Arrays**

**Aim:** Compare two matrices for equality.

**Algorithm:**

1. Input dimensions and elements of both matrices.
2. Check if dimensions match.
3. Compare elements one by one.
4. Output whether matrices are equal or not.

**Code Placeholder:**

```cpp
// Program 6: Compare two 2D arrays
#include <iostream>
using namespace std;

int main() {
    // Input, comparison, and result logic here
}
```

---

## Conclusion

These programs demonstrate the core concepts of **multidimensional arrays** in C++:

- Input and display of 2D arrays
- Matrix addition and multiplication
- Diagonal sum calculation
- Matrix transposition
- Comparison of matrices

They illustrate **efficient data handling, nested loops, and memory management**, which are fundamental for advancing to **dynamic memory allocation** and **complex data structures** in C++.

---
