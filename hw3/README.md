# Homework 3

3D Random Walk

Randomly take a direction (add a random unit vector to where you are) and repeat for N steps. In the end you will calculate the average distance over M times measurement for each value of N.

In this practice, set N to 10, 100 and 1000, while M stays 1000.

You may use your code written during the lecture.

How to generate random number:

```c++
  /* initialize random seed, call only once */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;
```

Sample Output:

```text
N=10 M=1000 D=16.343
N=100 M=1000 D=160.343
N=1000 M=1000 D=1600.343
```
