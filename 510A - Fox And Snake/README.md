# Fox And Snake
 
This directory contains my solution to the Codeforces problem [Fox And Snake (510A)](https://codeforces.com/problemset/problem/510/A)

## Problem Overview  
Given a grid of size `n` rows × `m` columns, print a snake pattern where:  
- **Odd-numbered rows** (1-based index) are completely filled with `#`.  
- **Even-numbered rows** contain a single `#` that alternates between the **rightmost** and **leftmost** column.  

**Input**  
- Two integers `n` (rows) and `m` (columns).  

**Output**  
- The snake pattern grid.  

## Solution Approach  
1. **Grid Generation**:  
   - **Odd-indexed rows** (0-based): Print full `#` rows.  
   - **Even-indexed rows**:  
     - Alternate the `#` position between the **last column** (for 1st, 3rd, ... even rows) and **first column** (for 2nd, 4th, ... even rows).  
   - Use an `oddness` counter to track the alternation pattern.  

---

## Examples  
| Input | Output          |  
|-------|-----------------|  
| `3 3` | `###``..#``###` |  
| `5 3` | `###``..#``###``#..``###` |  

---

## How to Compile and Run  
```bash  
g++ -std=c++11 -o fox_snake fox_snake.cpp  
./fox_snake  
```

---

## [License](../LICENSE.md)  
© 2025 Rajveer Singh Saggu  