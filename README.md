# Data Structure & Algorithm Homework

## Homework Overview

This repository contains solutions to several data structure and algorithm problems, including Tower of Hanoi, Browser History Management, and others. Each problem is solved using stacks, queues, and other data structures, with a focus on efficiency and clarity.

## Questions:

### 1. Tower of Hanoi

In the classic problem of the Towers of Hanoi, you have 3 towers and N disks of different sizes, which can slide onto any tower. The puzzle starts with disks sorted in ascending order of size from top to bottom.

**Constraints**:
1. Only one disk can be moved at a time.
2. A disk is slid off the top of one tower onto another tower.
3. A disk cannot be placed on top of a smaller disk.

**Objective**:
Move the disks from the first tower to the last using Stacks.

**Example**:
![Tower of Hanoi](https://upload.wikimedia.org/wikipedia/commons/4/4f/Tower_of_Hanoi.gif)

### 2. Browser History Management

Simulate a browser's back and forward navigation using a stack. The following functionalities are implemented:

- `visit(url)`: Visit a new URL.
- `back()`: Go back to the previous URL.
- `forward()`: Go forward to the next URL.

**Example**:
```cpp
browser.visit("uit.edu.vn");
browser.back();  // returns "httt.uit.edu.vn"
browser.forward();  // returns "uit.edu.vn"
browser.visit("daa.uit.edu.vn");
browser.back();  // returns "uit.edu.vn"
```
### 3. Visible People in Queue
   
Given an array heights, where heights[i] represents the height of the i-th person, determine how many people each person can see to their right. A person can see another if everyone in between is shorter than both of them.

Example:
```cpp
Input: heights = [10,6,8,5,11,9]
Output: [3,1,2,1,0]
```
### 4. Minimum Coins for Fruits

Given an integer array prices where prices[i] represents the number of coins required to buy the i-th fruit, determine the minimum number of coins necessary to obtain all the fruits with the market's incentive structure.
```cpp
Input: prices = [3,1,2]
Output: 4
```
