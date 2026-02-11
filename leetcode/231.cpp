#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;

        while(n > 1) {
            if((n & 1) == 1)  
                return false;

            n = n >> 1;     
        }

        return true;
    }
};
// 2nd method( check for all posiible max value of int till 2^30 from 0 if any power of 2 ==n ret true else false)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0 ; i<=30 ; i++){
            int ans=pow(2,i);
            if(n==ans)
                return true;
        }
        return false;
    }
};

/* 
In this approach, we repeatedly divide the number by 2 using right shift (n >> 1).

First, we return false for n <= 0 because negative numbers and 0 cannot be powers of two.

We use a while loop that runs while n > 1.

In each iteration:
- We check if the number is odd using (n & 1).
  If it is odd (and not equal to 1), we immediately return false.
- Otherwise, we right shift n (n >> 1), which divides it by 2.

If the loop finishes and n becomes exactly 1, we return true.

Although 1 is odd, it is allowed because the loop stops when n == 1,
so we never reject it.

The idea is:
A power of two can be divided by 2 repeatedly until it becomes 1.
If any other odd number appears before reaching 1, it is not a power of two.
*/
