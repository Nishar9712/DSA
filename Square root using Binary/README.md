# Square Root Using Binary Search with Decimal Precision (C++)

## Overview

This program calculates the square root of a non-negative integer in two steps:

1. **Binary Search** to find the integer (floor) square root.
2. **Incremental Precision** to compute the square root up to a specified number of decimal places.

For example:

| Input | Output (8 decimal places) |
|-------|---------------------------|
| 2 | 1.41421356 |
| 10 | 3.16227766 |
| 25 | 5.00000000 |

---

## Algorithm

### Step 1: Integer Square Root (Binary Search)

- Search between `0` and `n`.
- Find the largest integer whose square is less than or equal to `n`.
- Time Complexity: **O(log n)**.

Example:

```
n = 10

0 ......... 10
      ↑
     mid = 5

5² = 25 > 10
Search left half.

Eventually,
Answer = 3
```

---

### Step 2: Decimal Precision

After obtaining the integer part, improve the answer one decimal place at a time.

For each decimal place:

- Divide the increment (`fraction`) by 10.
- Increase the current answer by `fraction` until its square exceeds `n`.
- Store the last valid value.

Example for √2:

```
Initial answer = 1

Step 1 (0.1):
1.1
1.2
1.3
1.4 ✓
1.5 ✗

Answer = 1.4

Step 2 (0.01):
1.41
1.42 ✗

Answer = 1.41

...
Continue for desired precision.
```

---

## Functions

### `binarySqrt(int n)`

Finds the integer square root using binary search.

**Parameters**

- `n` : Number whose square root is to be calculated.

**Returns**

- Integer (floor) square root.

---

### `Precision(int n, double tempNum, int pre)`

Calculates the decimal part of the square root.

**Parameters**

- `n` : Original number.
- `tempNum` : Integer square root.
- `pre` : Number of decimal places required.

**Returns**

- Square root with the specified precision.

---

## Time Complexity

### Binary Search

- **O(log n)**

### Decimal Precision

- **O(10 × precision)** (approximately)

Overall:

```
O(log n + 10 × precision)
```

---

## Space Complexity

```
O(1)
```

---

## Example

### Input

```cpp
int n = 2;
```

### Output

```
1.41421356
```

---

## Compilation

Using g++:

```bash
g++ sqrt.cpp -o sqrt
```

Run:

```bash
./sqrt
```

---

## Notes

- Uses binary search for efficient computation of the integer square root.
- Refines the result incrementally to achieve the required decimal precision.
- Does not use the standard library function `sqrt()`.
- Suitable for learning binary search and precision-based numerical algorithms.