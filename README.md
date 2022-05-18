<img src="https://user-images.githubusercontent.com/252020/169175049-ca174ed8-837d-450b-85bb-a460c36196d6.png"
     width="50%" />

## Quiz 3 (40pt)

### Dates

    - Assigned: 05/18/2022
    - Due: Thursday May 26 23:59:00 PDT 2022

### Tasks

Implement the following function that produces all the possible permutations of a given set of numbers. 

```c++
std::vector<std::vector<int>> permute(std::vector<int> &nums);
```

Here are some example borrowed from [LeetCode](https://leetcode.com/problems/permutations/):

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Input: nums = [1,0]
Output: [[0,1],[1,0]]
```

There is **no duplicated numbers** in the input array.

The implementation should be *O(1)* space which means no additional memory buffer such as array/vector/stack/queue can be used. If you are not sure, check with the instructor. 

This quiz is an open form where you will be writing both the function and test. Upon completion, your tests should prove to the best of its effort that your function is correct. The instructor has his own set of test cases and your code will also be evaluated by that. Altough this does not directly determine the grade.

### Grading Standard

1. No late submission. Any late submission will be treated as no submission. Zero point.
2. At least 5 reasonable test cases need to be provided and passed. Here's a few possible cases to cover: empty innput, single number, sorted and unsorted inputs, unordered output. +5 for more than 5 test cases.

### Submission

Same as homework, submit your PR in Canvas.

### What if there's duplicates (with credits counted towards your midterm)

If there's duplicates in the input, how would you implement the permute instead?

**10 extra credit (counted towards midterm)**: Write a separate function with its own tests that can handle input with duplicated numbers. For this part, it's okay to use additional buffer (hint: map).
