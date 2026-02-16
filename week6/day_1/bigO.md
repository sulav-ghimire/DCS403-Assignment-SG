
## Time Complexity (Big-O Notation)


### Question 1

The algorithm contains two loops that run proportional to *n* and one constant loop.

**Time Complexity:** O(n)


### Question 2

The loop decreases by 4 each iteration. Constant steps are ignored in Big-O.

**Time Complexity:** O(n)



### Question 3

The loop increases by 5 each iteration. This is still proportional to *n*.

**Time Complexity:** O(n)



### Question 4

The value is divided by 2 every iteration, which results in logarithmic growth.

**Time Complexity:** O(log n)


### Question 5

The value doubles every iteration, producing logarithmic number of steps.

**Time Complexity:** O(log n)



### Question 6

Two nested loops each run *n* times.

**Time Complexity:** O(n²)

---
### Question 7

Inside the outer loop there is one logarithmic loop and one linear loop.
The linear loop dominates, and it runs for every outer iteration.

**Time Complexity:** O(n²)


### Question 8

The first part contains three nested loops → cubic time.
The second part has a constant inner loop which does not change the result.

**Time Complexity:** O(n³)


### Question 9

This is a triangular nested loop: 1 + 2 + 3 + ... + n operations.

Time Complexity: O(n²)


