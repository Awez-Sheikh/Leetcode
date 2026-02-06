class Solution {
public:
    long long fnc(vector<int>& nums, int m) {
        long long sum = 0; // Fix 2: Use long long
        for(int i = 0; i < nums.size(); i++) {
            // Fix 1 & 4: Integer ceiling division (a + b - 1) / b
            sum += (nums[i] + m - 1) / m;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(fnc(nums, mid) <= threshold) {
                ans = mid;      
                high = mid - 1; 
            } else {
                low = mid + 1;  
            }
        }
        return ans;
    }
};