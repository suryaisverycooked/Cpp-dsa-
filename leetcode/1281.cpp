class Solution {
public:
    int subtractProductAndSum(int n){
        int sum=0;
        int product=1;
        while(n!=0){
            int digit = n%10;
            sum = sum + digit;
            product = product * digit;
            n=n/10;
        }
        return product-sum;
    }
};

/* to get the last digit use modulus(%) and use a while loop where n is not 0 and calculate sum and product.
since sum and product are declared outside the loop the values of both of these will be remembered and wont reset everytime.
we find the remaining digits by n/10 and keep going on unless n becomes 0.
also n%10 (where n<10) remainder will be n itself.
for example 234-

234%10 = 4=digit
sum = 0+4 =4 and product = 1*4=4 them n=234/10=23 

then 23%10=3 hence sum = 4=+3=7 and product = 4*3=12 then n=23/10=2

then 2%10=2 hence sum=7+2=9 and product=12*2=24 and n becomes 0 as 2/10=0

finally product-sum is returned*/