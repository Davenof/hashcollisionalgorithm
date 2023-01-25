# hashcollisionalgorithm
 This program is a translation of an algorithm into C. The algorithm proves the possibility of the same hash values being assigned to two pieces of data. See algorithm below. 
 
 
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
