# The New Year: Meeting Friends

This directory contains my solution to the Codeforces problem [The New Year: Meeting Friends (723A)](https://codeforces.com/problemset/problem/723/A).

## Problem Overview

Three friends live on a straight line (Ox axis) at points \( x_1 \), \( x_2 \), and \( x_3 \). They want to meet at a single point to celebrate the New Year. The goal is to find the minimum total distance all three friends need to travel to meet at the same point.

It is guaranteed that the optimal meeting point results in an integer total distance.

**Input**

- Three distinct integers \( x_1, x_2, x_3 \) (each between 1 and 100), representing the coordinates of the friends' houses.

**Output**

- A single integer representing the minimum total distance the friends must travel to meet.

## Solution Approach

- Read the three coordinates.
- Sort them to find the median coordinate.
- The optimal meeting point is the median.
- Calculate the sum of absolute distances from each friend’s position to the median.
- Output the total distance.

## Examples

| Input     | Output |
|-----------|---------|
| 7 1 4     | 6       |
| 30 20 10  | 20      |

## How to Compile and Run

```bash
g++ -std=c++11 -o meeting_friends meeting_friends.cpp
./meeting_friends
```

## [License](../LICENSE.md)

© 2025 Rajveer Singh Saggu
