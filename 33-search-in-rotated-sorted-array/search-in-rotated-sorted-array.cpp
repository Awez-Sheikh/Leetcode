class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) { // Corrected: Use {
            int mid = low + (high - low) / 2; // Corrected: Prevent overflow

            if (nums[mid] == target) return mid;

            // Identify which half is sorted
            if (nums[low] <= nums[mid]) { // Left half is sorted
                // Check if target is within this sorted left half
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else { // Right half is sorted
                // Check if target is within this sorted right half
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        } // Corrected: Use }
        return -1;
    }
};