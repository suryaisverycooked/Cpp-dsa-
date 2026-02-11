class Solution {
public:
    int bitwiseComplement(int n) {
        int answer =0,i=0;
        if(n==0)
            return 1;
        while(n!=0){
            int bit=n&1;
            if(bit==0)
                bit=1;
            else 
                bit =0;
            answer=(bit<<i)+answer;
            i++;
            n=n>>1;
        }
        return answer;
    }
};

/*
This program finds the complement of a base-10 integer by working with its binary form.

First, we handle the special case:
If n == 0, we directly return 1, because binary of 0 is "0" and its complement is "1".

We initialize answer = 0 and i = 0.
Here, i represents the current bit position.

We use a while loop that runs while n is not 0.

In each iteration:

- n & 1 extracts the last binary bit of n.
- The bit is flipped (0 becomes 1, 1 becomes 0).
- The flipped bit is shifted left by i positions using (bit << i)
  to place it at the correct power of 2.
- This value is added/ORed into answer, so answer keeps building.

Then:
- n is right shifted (n >> 1) to remove the last bit.
- i is incremented to move to the next bit position.

answer is declared outside the loop, so it remembers all previous bits
and gradually forms the complemented number.

When n becomes 0, all bits are processed and answer is returned as the
decimal value of the complemented binary number.
*/


/*class Solution {
public:
    int bitwiseComplement(int n) {
            int mask =0;
            int temp=n;
            if(temp==0)
                return 1;
            while(temp!=0){
                mask=(mask<<1)|1;
                temp=temp>>1;
            }
     return n^mask;
    }
};
second method using mask and xor

*/