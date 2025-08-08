class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int prefix_sum=0;
        int total=0;
        int count=0;
         m[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            if(m.count(prefix_sum-k)){   // finding the count of prefix_sum available 
                total+=m[prefix_sum-k];  // adding it to the total_count
                m[prefix_sum]++;       // after adding it to the total_count , updating the prefix_sum value by increasing it by 1 in unordered_map  
            }else{
                m[prefix_sum]++;
            }
        }
        return total;
    }
};