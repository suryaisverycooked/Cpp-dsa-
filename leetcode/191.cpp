#include<iostream>
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};

/*
This problem is about counting how many 1s are present in the binary
representation of a number.

We initialize count = 0 to store the number of set bits (1s).

We use a while loop that runs until n becomes 0.

In each iteration:

- n & 1 checks the last binary bit of n.
  If the last bit is 1, the condition becomes true and count is incremented.

- n >> 1 shifts all bits of n one position to the right.
  This effectively removes the last bit, so we can check the next bit
  in the following iteration.

Since count is declared outside the loop, its value is remembered and
keeps increasing whenever a 1 is found.

Example: n = 13 (binary = 1101)

Iteration 1:
1101 & 1 = 1 → count = 1
1101 >> 1 = 110

Iteration 2:
110 & 1 = 0 → count stays 1
110 >> 1 = 11

Iteration 3:
11 & 1 = 1 → count = 2
11 >> 1 = 1

Iteration 4:
1 & 1 = 1 → count = 3
1 >> 1 = 0 (loop ends)

Finally, count is returned.

So for 13, output = 3 because there are three 1s in 1101.
*/
