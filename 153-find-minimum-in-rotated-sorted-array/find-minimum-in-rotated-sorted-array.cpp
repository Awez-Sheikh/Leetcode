class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        int ans=INT_MAX;
        while(l<=h){
            int mid=(h+l)/2;
            if(nums[l]<=nums[mid]){
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else{
                h=mid-1;
                ans=min(ans,nums[mid]);
            }    
        }
        return ans;

        
    }
};