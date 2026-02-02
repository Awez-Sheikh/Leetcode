class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            // Optimization: If the current search space is already sorted
            if (nums[low] <= nums[high]) {
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){   // left half is of no use
                ans=min(ans,nums[low]); // here min element lies on index which is low
                low=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};