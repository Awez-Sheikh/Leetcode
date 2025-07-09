class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++) 
            if (nums[i] > nums[(i+1)%n] && ++count > 1) 
            return false;
        return true;
    }
};

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0, n = nums.size();
//         for (int i = 0; i < n; i++) {
//             if (nums[i-1]>nums[i]){
//                 count++;
//             }
//     }
//          if(nums[0]<nums[n-1])
//          count++;
//          return count<=1;
//     }
// };
