# Chewbacca and Number (Codeforces 514A)


This directory contains my solution to the Codeforces problem [Chewbacca and Number (514A)](https://codeforces.com/problemset/problem/514/A).

## Problem Overview

Given an integer \( x \), Chewbacca wants to minimize it by inverting some of its digits. Inverting a digit \( t \) means replacing it with \( 9 - t \). The resulting number must not start with a zero.

**Input**

- A single integer \( x \).

**Output**

- The smallest possible positive integer after inverting some digits, with no leading zero.

## Solution Approach

- Iterate through each digit of the number:
  - For the first digit:
    - If it is 9, leave it as is.
    - Otherwise, invert it if the inversion results in a smaller digit and does not produce a leading zero.
  - For subsequent digits:
    - If the digit is 5 or greater, replace it with \( 9 - d \).
- Print the transformed number.

## Examples

| Input | Output |
|-------|--------|
| 27    | 22     |
| 4545  | 4444   |
| 9     | 9      |

## How to Compile and Run

```bash
g++ -std=c++11 -o chewbacca chewbacca.cpp
./chewbacca
```

## [License](../LICENSE.md)

© 2025 Rajveer Singh Saggu