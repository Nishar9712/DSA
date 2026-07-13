# First and Last Position of an Element in a Sorted Array

## Problem
Given a sorted array `ARR` of `N` integers and a target value `K`, determine the indices of the first and last occurrence of `K` in the array.

- If `K` is present in `ARR`, output two integers: the index of the first occurrence and the index of the last occurrence.
- If `K` is not present, output `-1 -1`.
- `ARR` is zero-indexed.

## Input Format
- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains two integers `N` and `K`.
  - The second line contains `N` integers representing the sorted array `ARR`.

## Output Format
- For each test case, print two integers separated by a space:
  - the first occurrence index of `K`
  - the last occurrence index of `K`
- If `K` is not found, print `-1 -1`.

## Constraints
- `1 ≤ T ≤ 100`
- `1 ≤ N ≤ 5000`
- `0 ≤ K ≤ 10^5`
- `0 ≤ ARR[i] ≤ 10^5`
- `ARR` is sorted in non-decreasing order.
- Time Limit: 1 second

## Example
### Sample Input
```
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
```

### Sample Output
```
-1 -1
4 7
```

### Explanation
- Test case 1: `3` is not present in the array, so the result is `-1 -1`.
- Test case 2: the first occurrence of `2` is at index `4` and the last occurrence is at index `7`.

## Solution Strategy
Because the array is sorted, the search can be done efficiently using binary search.

1. Find the first index where `ARR[mid] == K` by continuing to search left after finding `K`.
2. Find the last index where `ARR[mid] == K` by continuing to search right after finding `K`.
3. If `K` is never found, both indices remain `-1`.

## Complexity
- Time: `O(log N)` per search, `O(log N)` for each of two searches
- Space: `O(1)`

## Notes
- This problem is particularly suitable for binary search because the array is sorted.
- If the array contains duplicates, the first and last positions can still be found independently.
- Edge cases include arrays where all values are the same, the target is absent, or the target occurs only once.

## Tags
- Binary Search
- Arrays
- Searching
- Sorted Array