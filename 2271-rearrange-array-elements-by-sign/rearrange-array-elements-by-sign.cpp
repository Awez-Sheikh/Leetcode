class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int negIndex=1, posIndex=0;
        vector<int> ans(nums.size(),0);
        for (int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;
    }
};