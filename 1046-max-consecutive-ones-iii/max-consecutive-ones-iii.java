class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int l = 0;
        int r = 0;
        int zeroes = 0;
        int max_length = 0;
        while(r<n){
            if(nums[r]==0) zeroes++;
            while(zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            if(zeroes<=k){
                int length = r-l+1;
                max_length = Math.max(max_length,length);
            }
            r++;
        }
        return max_length;
    }
}