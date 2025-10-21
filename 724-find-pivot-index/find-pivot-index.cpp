class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum=0;
        int n=nums.size();
        int total_sum = 0;
        for(int i=0;i<n;i++){
            total_sum += nums[i];
        }
        for(int i=0;i<n;i++){
            int right_sum = total_sum - nums[i] - left_sum;
            if(left_sum == right_sum){
                return i;
            }
            else{
                left_sum+=nums[i];
            }
        }
        return -1;
    }
    
};