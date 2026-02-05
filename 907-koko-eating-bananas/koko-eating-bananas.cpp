class Solution {
public:
    long long hours(vector<int>& arr, int m) {
        long long sum_hrs = 0;
        for(int i = 0; i < arr.size(); i++) {
            // Integer trick for ceiling: (a + b - 1) / b
            sum_hrs += (arr[i] + (long long)m - 1) / m;
        }
        return sum_hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high; 
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(hours(piles, mid) <= h) {
                ans = mid; // Store the speed (mid), not the hours
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};