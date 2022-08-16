# SOLUTION

### HINT1: 
Let the matrix element be p, q, r, s (p, q in 1st row, r, s in 2nd row). Now determinant is 0, i.e., p×s=q×r. so now a<sup>2</sup> ≤ p×s ≤ b<sup>2</sup>

### HINT2: 
Think that p, q, r, s are factors of the same element where p×s=q×r, and this product is equal to the element.

## LOGIC OF THE PROBLEM: 
Now let us focus on p and s only. Product of p and s is greater than or equal to a and less than or equal to b. Now consider any integer between a and b, let it be w. Let p×s=w. So, for determinant to be zero, q×r=w and they are also factor of w. And p, q, r, s all are different. So now think that (p, s) is factor pair of w, so is (q, r), where the product of elements is equal to w. Now think that how many such pairs you can form? (Think for some time before seeing ahead)

Now number of factors of any composite number (except perfect squares one) are even (can you tell why?). For non-square composite numbers, we can form k such pairs where 2k is number of factors of that number. (Proof of this is a task for you). For perfect square numbers, if the number of factors are 2k+1, then we can form k such pairs. 

Now for picking the elements in the matrix, we can choose any of the two pairs, and the number of ways to do this is k×(k-1)/2 (this must be simple for you !!). Now for each pair choice we can form 4 different matrices with all the given criteria. (This is simple counting)

## TIME COMPLEXITY:
One can easily think of a algorithm of O(n<sup>2</sup>) time complexity (where n be the maximum possible value of a and b).

Now this will exceed the time limit for the problem.

So, try for a better algorithm which is of O (n log n) time complexity.<br>
(Hint for this algorithm: Try to store number of factors of each integer smaller than the given bound beforehand using O (n log n) time complexity)
