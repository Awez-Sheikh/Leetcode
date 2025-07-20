class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Pointer for inserting non-zero values
        // Move all non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        // Fill the rest with zeros
        while (j < nums.size()) {
            nums[j++] = 0;
        }
    }
};
