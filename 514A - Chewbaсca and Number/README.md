## Chewbaсca and Number (Codeforces 514A)

This folder contains my solution to the Codeforces problem [Chewbaсca and Number (514A)](https://codeforces.com/problemset/problem/514/A).

**Problem Summary**

Given an integer `x`, Chewbacca wants to make it as small as possible by inverting some of its digits. Inverting a digit `t` means replacing it with `9 - t`. However, the resulting number must not have a leading zero.

**Input**

- A single integer `x`.

**Output**

- The minimum possible positive number obtained after inverting some digits, with no leading zero.

**Approach**

- For each digit in the number:
  - If the digit is 5 or greater, replace it with `9 - d` if this does not create a leading zero.
  - The first digit is treated specially to avoid leading zeroes: if it is 9, it remains unchanged; otherwise, invert if it reduces the digit and does not make it zero.
- Output the transformed number.

**Example**

| Input | Output |
|-------|--------|
| 27    | 22     |
| 4545  | 4444   |
| 9     | 9      |

**How to Run**

- Compile:  
  `g++ -std=c++11 -o chewbaсca chewbaсca.cpp`
- Run:  
  `./chewbaсca`

### [License](../LICENSE.md)

`Copyright (C) 2025 Rajveer Singh Saggu`