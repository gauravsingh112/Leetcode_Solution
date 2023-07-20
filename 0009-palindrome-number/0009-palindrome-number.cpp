class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) {
            return false; // Negative numbers can't be palindromes
        }
        
        long long copy = x;
        long long num = 0;
        while (x > 0) {
            long long  ld = x % 10;
            num = num * 10 + ld;
            x = x / 10;
        }
        
        return (num == copy);
    
        
    }
};