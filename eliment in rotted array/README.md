# Element in Rotated Array

This repository contains a C++ solution for finding an element in a rotated sorted array.

## Problem

Given a rotated sorted array, the goal is to find the index of a target value using an efficient algorithm.

## Approach

- Find the pivot point where the array rotation occurs.
- Use binary search on the correct subarray.
- Return the index of the target element or `-1` if it is not found.

## Files

- `eliment in rotted array.cpp` — C++ implementation using pivot search and binary search.
- `README.md` — this file.

## Example

With the sample input array:

```text
[3, 7, 8, 1, 2, 3]
```

Searching for `2` will return index `4`.

## Build and Run

```powershell
cd "c:\_Skills\DSA-1\eliment in rotted array"
g++ "eliment in rotted array.cpp" -o "eliment in rotted array.exe"
./"eliment in rotted array.exe"
```

## Notes

- The current implementation uses a hard-coded sample array and target value.
- Update the array and `k` value in the source file to test other cases.
