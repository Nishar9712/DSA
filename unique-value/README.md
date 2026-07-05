# Unique Element Finder (C++)

Find the single value in an integer array where every other value appears exactly twice.

## Approaches

- Brute force: check each element against the rest (O(n²), O(1) space).
- XOR trick: XOR all numbers — pairs cancel out, leaving the unique value (O(n), O(1) space).

## Files

- `unique-value.cpp` — example implementations and a simple `main()` to demo both methods.

## Build

Use `g++`/`gcc` on Windows (MinGW) or Linux/macOS:

```bash
g++ -std=c++17 unique-value.cpp -O2 -o unique-value.exe
```

## Run

```bash
./unique-value.exe
```

Expected output (example):

```
Unique value (XOR): 0
Unique value (brute force): 0
```

## Notes

- The XOR method requires that every other element appears exactly twice.
- If the input does not satisfy that constraint, use frequency counting (hash map) instead.

## Example

The program in `unique-value.cpp` demonstrates both methods on a small sample array.

---
Happy coding!
