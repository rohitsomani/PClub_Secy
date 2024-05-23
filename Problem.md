# XOR the name

It is Secy recruitment season at IITK and Rohit wants to be a part of the PClub. Since novelty and originality is the basis of evaluation for the task, he decides to frame a question on his own name.

You are given a positive integer *k* . You create a string *s* of length *5k* such that *s* consists of repeating sequences of the word *ROHIT*. More formally, for every *i (0 ≤ i≤ k−1)*,

-  s [5*i + 1] = R
-  s [5*i + 2] = O
- s [5*i + 3] = H
- s [5*i + 4] = I
- s [5*i + 5] = T

(Note that 1 based indexing is used in this problem.)
For example, if *k* = 2 then the string s would be *ROHITROHIT*

A pair of indices *( l , r )* such that *1 ≤ l < r ≤ 5k* is said to form a cool pair if the [bitwise XOR](https://en.wikipedia.org/wiki/Bitwise_operation#XOR) of [ASCII values](https://en.wikipedia.org/wiki/ASCII#Printable_characters) of all the elements from *s [ l ]* to *s [ r ]* together with the bitwise XOR of ASCII values of elements from *s [ 5k − r + 1 ]* to *s [ 5k − l + 1 ]* is *0*. You are required to calculate the total number of such cool pairs for a particular value of *k*

## Input
Each test contains multiple test cases. The first line contains the number of test cases *t* (1 ≤ *t* ≤ 100000).
The only line of each test case contains a single integer *k* (1 ≤ *k* ≤ 1000000).

## Output
For each test case, print the total number of cool pairs (*l*,*r*).
Since the number of pairs might be too large, please print it modulo 998244353.
## Additional 
Time limit: 1 second
Memory limit: 512 megabytes