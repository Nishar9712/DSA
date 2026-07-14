# Search in a Rotated Sorted Array (C++)

## Overview

This C++ program searches for a target element in a **rotated sorted array**.

The algorithm works in two steps:

1. Find the pivot (the index of the smallest element).
2. Perform Binary Search on the correct half of the array.

This approach has an overall time complexity of **O(log n)**.

---

## Algorithm

### Step 1: Find the Pivot

The `Pivot()` function uses Binary Search to locate the smallest element in the rotated sorted array.

Example:

Array:
```
3 7 8 1 2 3
```

Pivot Index:
```
3
```

Pivot Element:
```
1
```

---

### Step 2: Binary Search

After finding the pivot:

- If the target lies between the pivot element and the last element, search in the right half.
- Otherwise, search in the left half.

---

## Functions

### `Pivot(int arr[], int n)`

Finds the index of the smallest element in the rotated sorted array.

**Parameters**

- `arr[]` : Rotated sorted array
- `n` : Size of array

**Returns**

- Pivot index

---

### `binarySearch(int arr[], int start, int end, int k)`

Performs Binary Search on a sorted portion of the array.

**Parameters**

- `arr[]` : Array
- `start` : Starting index
- `end` : Ending index
- `k` : Target element

**Returns**

- Index of target if found
- `-1` if not found

---

## Example

### Input Array

```cpp
int arr[] = {3, 7, 8, 1, 2, 3};
```

Target

```cpp
2
```

### Output

```
4
```

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Finding Pivot | O(log n) |
| Binary Search | O(log n) |
| Overall | **O(log n)** |

---

## Space Complexity

```
O(1)
```

No extra data structures are used.

---

## How to Compile

Using **g++**

```bash
g++ main.cpp -o main
```

Run

```bash
./main
```

Windows

```bash
g++ main.cpp -o main.exe
main.exe
```

---

## Code Structure

```
main.cpp
│
├── Pivot()
│      Finds the rotation point
│
├── binarySearch()
│      Searches for the target element
│
└── main()
       Initializes the array
       Finds pivot
       Searches the target
       Prints the index
```

---

## Sample Execution

```
Array:
3 7 8 1 2 3

Target:
2

Pivot Index:
3

Element Found At Index:
4
```

---

## Note

In the following condition:

```cpp
if(k >= arr[pivot] & k <= arr[end])
```

replace the bitwise AND operator (`&`) with the logical AND operator (`&&`):

```cpp
if (k >= arr[pivot] && k <= arr[end])
```

Using `&&` is the correct choice for logical comparisons and avoids unintended behavior.

---

## Author

**Language:** C++

**Concepts Used:**
- Binary Search
- Rotated Sorted Array
- Divide and Conquer
- Time Complexity Optimization
