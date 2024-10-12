Data Structures & Algorithms CS4343 - Homework Solutions
This repository contains solutions to the homework questions for Data Structures & Algorithms CS4343, prepared by Tran Vinh Khiem.

Homework Overview
1. Tower of Hanoi (Question 1)
The classic Tower of Hanoi problem with three towers and N disks of different sizes. The objective is to move all disks from the first tower to the last using stacks, while adhering to the following constraints:

Only one disk can be moved at a time.
A disk can be slid off the top of one tower onto another.
A disk cannot be placed on top of a smaller disk.
Example:
Initial Status:
Finished Status:
Constraints:
Use stacks to simulate the movement of disks.
2. Browser History Management (Question 2)
This question involves simulating a browser's back and forward navigation using a stack. Implement the following functionalities:

visit(url): Visit a new URL.
back(): Go back to the previous URL.
forward(): Go forward to the next URL.
Example:
cpp
Sao chép mã
browser.visit("httt.uit.edu.vn");
browser.visit("uit.edu.vn");
browser.back();       // returns "httt.uit.edu.vn"
browser.forward();    // returns "uit.edu.vn"
browser.visit("daa.uit.edu.vn");
browser.back();       // returns "uit.edu.vn"
3. Visible People to the Right (Question 3)
Given an array of heights, where heights[i] represents the height of the i-th person in a queue, the task is to determine how many people each person can see to their right. A person can see another if everyone in between is shorter than both of them.

Example 1:
Input: heights = [10, 6, 8, 5, 11, 9]
Output: [3, 1, 2, 1, 0]
Example 2:
Input: heights = [5, 1, 2, 3, 10]
Output: [4, 1, 1, 1, 0]
Constraints:
1 ≤ heights.length ≤ 10^5
1 ≤ heights[i] ≤ 10^5
All values of heights are unique.
4. Minimum Coins to Buy Fruits (Question 4)
In a fruit market, each fruit has a price. The market offers an incentive: if you buy the i-th fruit, you can obtain any number of the subsequent fruits for free. The objective is to determine the minimum coins necessary to buy all the fruits.

Example 1:
Input: prices = [3, 1, 2]
Output: 4
Example 2:
Input: prices = [1, 10, 1, 1]
Output: 2
Example 3:
Input: prices = [26, 18, 6, 12, 49, 7, 45, 45]
Output: 39
Constraints:
1 ≤ prices.length ≤ 1000
1 ≤ prices[i] ≤ 10
Getting Started
Clone the repository:

bash
Sao chép mã
git clone https://github.com/yourusername/cs4343-homework.git
cd cs4343-homework
Compile and run the solutions for each problem:

bash
Sao chép mã
g++ question1.cpp -o question1
./question1
Contributors
Your Name - Initial work
License
This project is licensed under the MIT License - see the LICENSE file for details.
