from pathlib import Path
import pypandoc

content = r"""# Unique Element Finder in C++

This project demonstrates two approaches to find the unique element in an integer array:

1. **Brute Force Method** using nested loops.
2. **Bitwise XOR Method** for an efficient solution.

## Code Overview

### Brute Force Function

The `unique()` function checks every element against all other elements in the array. If an element appears only once, it is returned.

**Time Complexity:** `O(n²)`  
**Space Complexity:** `O(1)`

### XOR Method

The XOR (`^`) operator has the following properties:

- `a ^ a = 0`
- `a ^ 0 = a`

When every element appears exactly twice except one, XORing all elements returns the unique value.

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

## Example Input

```cpp
int array[] = {1, 3, 1, 6, 3, 6, 4, 4, 0};