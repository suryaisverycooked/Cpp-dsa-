class Solution {
public:
    int reverse(int x) {
            int reverse=0;
            int min=-2147483648;
            int max= 2147483647;
            while(x!=0){
                int digit = x%10;
                if(reverse > max/10 || reverse < min/10)
                    return 0;
                reverse = reverse *10 + digit;
                x=x/10;
         }
         return reverse;
    }
};

/*
In this problem, we reverse the digits of an integer and return the reversed value.

We use a while loop that runs until n becomes 0.

In each iteration:
- n % 10 gives the last digit of the number.
- We build the reversed number using:
      rev = rev * 10 + digit
  This shifts the existing digits of rev to the left and appends the new digit.

- n is reduced using n / 10 to remove the last digit.

rev is declared outside the loop so its value is remembered and keeps building
until all digits are processed.

Example: n = 123

123 % 10 = 3 → rev = 0*10 + 3 = 3
n = 123 / 10 = 12

12 % 10 = 2 → rev = 3*10 + 2 = 32
n = 12 / 10 = 1

1 % 10 = 1 → rev = 32*10 + 1 = 321
n = 1 / 10 = 0 (loop ends)

Finally, rev is returned.

The idea is:
- %10 extracts digits
- /10 removes digits
- rev*10 + digit appends digits in reverse order.
*/
