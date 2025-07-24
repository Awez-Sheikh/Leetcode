class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        if(nums.size()<=0) return {-1,-1};
        int neg=lower_bound(nums.begin(),nums.end(),t)-nums.begin();
        int pos=upper_bound(nums.begin(),nums.end(),t)-nums.begin()-1;
        if(neg>=nums.size() || nums[neg]!=t || nums[pos]!=t) return {-1,-1};
        return {neg,pos};
    }
};