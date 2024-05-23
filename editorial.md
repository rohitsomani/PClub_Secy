The ASCII values of *R,O,H,I,T* are *82, 79, 72, 73, 84* respectively. Note that 
- 82 ^ 79 ^ 73 ^ 84 evaluates to *0*. 
- We also know that XOR of a number with itself is *0*.  

We divide the problem into five cases depending on the value at index *l*.

**Case 1** Let the index *l* correspond to the character *R*. For *r*>*l*, consider 5 subcases in which *r* corresponds to 5 different characters. By working out frequencies of each character for a particular *r*, along with the above specified properties of XOR, we find that the favourable cases arise when *r* corresponds to one of these three characters: *O*, *H*, *T*. Then number of favourable cases can be calculated by adding the number of favourable cases for a particular *l*, which is trivial to find. The total number number of favourable cases for this case (case 1) is 
3k + 3(k-1) + 3(k-2) + ... + 3(1) = 3k(k+1)/2
Rest of the cases follow similarly. The details are as follows:  
**Case 2** *l* corresponds to *O*. Favourable is when *r* corresponds to *I* and *R*. Number of favourable cases = k^2^.  
**Case 3** *l* corresponds to *H*. Favourable is when *r* corresponds to *T* and *O*. Number of favourable cases = k^2^.  
**Case 4** *l* corresponds to *I*. Favourable is when *r* corresponds to *T*,*O* and *H*. Number of favourable cases = k + 3k(k-1)/2;  
**Case 5** *l* corresponds to *T*. Favourable is when *r* corresponds to *I* and *R*. Number of favourable cases = k(k-1).  
Sum of favourable cases = 6k^2^. Hence, the answer.
