# hashcollisionalgorithm
 This program is a translation of a pseudocode to C code. The algorithm proves the possibility of the same hash values being assigned to two pieces of data. See pseudocode below. 
 
 
**Input**: A positive integer **n**, a set **A** of **m** nonnegative integers such that **m > n**. <br>
**Output**: A pair **(x,y)** where **x, y ∈ A** such that **x-y = 0 (mod n)**

<p>
(1) Initialise X to be an array of length n with values of –1 <br>
(2) For i in range 0...m-1: <br>
(3) &nbsp;&nbsp;&nbsp;&nbsp;Let a ∈ A <br>
(4) &nbsp;&nbsp;&nbsp;&nbsp;A := A \ { a } <br>
(5) &nbsp;&nbsp;&nbsp;&nbsp;r := a mod n <br>
(6) &nbsp;&nbsp;&nbsp;&nbsp;If X[r] = -1 then X[r] := a else return (X[r], a)
 </p>

### Algorithm Summary
<p>
 This algorithm takes a number ‘n’ [from a user]. Then, takes ‘m’ numbers [from the user] in an array ‘A’. 
</p>
<p>
This algorithm then finds a pair of numbers which are members of the array ‘A’, such that the difference of these numbers after taking modulus with ‘n’ is equal to zero.
</p>
<p>
 The underlying implication of the above is that the algorithm implements the concept of hash collision.
</p>

### Runtime Complexity
The runtime complexity of the implementation in terms of *n* and *m* is *O(m)*.

### Proof of Hash Collision
 After running the code, a pair of nonnegative integers is returned. Both integers in the pair are elements of set *A*, which aligns with the output given above in the pseudocode. After dividing each integer in the pair with the value of *n* as given in the pseudocode, the values of both remainders are the same, which indicates a collision. Therefore, taking the array *X* as the hash table, we can say hash collision occurred.

