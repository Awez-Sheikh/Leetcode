class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int temp1=(pow(n,2)+n)/2;
        int temp=0;
        for(int i=0;i<n;i++){
            temp += nums[i];
        }
        temp1=temp1-temp;
        return temp1;
    }
};