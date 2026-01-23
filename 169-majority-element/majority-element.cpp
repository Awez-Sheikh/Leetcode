class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp; // Use unordered_map for O(N) speed
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        int maxFreq = 0;
        int ans = 0;

        // Correct way to iterate through a map:
        for (auto const& [element, count] : mpp) {
            if (count > maxFreq) {
                maxFreq = count;
                ans = element;
            }
        }
        
        return ans;
    }
};