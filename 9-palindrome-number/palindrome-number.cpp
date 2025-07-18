class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int n = x;
        long long revNum = 0; // Use long long to avoid overflow

        while (n > 0) {
            int d = n % 10;
            revNum = revNum * 10 + d;
            n = n / 10;
        }

        return revNum == x;
    }
};
