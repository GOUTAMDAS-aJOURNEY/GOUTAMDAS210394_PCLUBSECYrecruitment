# THE MATRIX FIGHT
Two friends serena and misty are playing a game. They have a box which contains 1000000 cards with number 1 to 1000000 written on it. They with blindfold on, will pick 2 cards each. Let the number serena got be N1, N2 and misty got be N3, N4. (You must be careful that N1>N2 and N3>N4, if not in the input make them like this). Now the task is as follows.


Let the person has numbers a & b (a>b). Now he/she has to form 2×2 matrices with following conditions.<br>
(i)DETERMINANT of the matrix must be zero.<br>
(ii)All elements of the matrix are different from each other (all are positive integers).<br>
(iii)if P denotes the product of all elements of the matrix, then P must satisfy the given condition, a<sup>2</sup> ≤ P ≤  b<sup>2</sup> <br>
DETERMINANT OF A 2×2 MATRIX is given by D = (p×s)- (q×r), where p and q are the element of first row (1st and 2nd column respectively), r and s are element of second row.

Now serena and misty have got their two numbers but they don’t have any knowledge of matrix. As a friend of them, write a code to determine who will be able to make a greater number of matrices with above constraints and win the fight.


## INPUT
Integer T≤100(Number of testcases)<br>
T number of lines below.
Four space separated integers N1, N2, N3, N4 (N1 may be greater than N2 and same thing for N3) in each line.


## OUTPUT
T lines of output.<br>
If serena can form greater number of matrices, print “SERENA” as output (without quotes, must be in capital), else if misty is the winner print “MISTY” as output. Otherwise print “DRAW”.

## SAMPLE TESTCASE 1:
2<br>
1 5 2 6<br>
2 4 3 5 <br>
## SAMPLE TESTCASE 2:
3<br>
10 6 5 12<br>
20 24 56 58<br>
78 79 80 81 <br>
## OUTPUT1:
MISTY<br>
DRAW

## OUTPUT2:
MISTY<br>
SERENA<br>
MISTY

## EXPLANATION:
In sample testcase 1, from first line of input N1=1, N2=5, N3=2, N4=6.
Now we can see that serena can’t form a single matrix, whereas misty can form 4 matrices. So misty is the winner. Whereas in the second line, both serena and misty can’t form a single matrix. So, it is a DRAW.
 
