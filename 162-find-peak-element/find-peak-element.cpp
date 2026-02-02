class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if (n == 1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low=1,high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            // Found the peak
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            
            // If we are on an increasing slope, move right
            if (nums[mid] > nums[mid - 1]) {
                low = mid + 1;
            }
            // Otherwise, we are on a decreasing slope (or a valley), move left
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};