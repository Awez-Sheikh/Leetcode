class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCnt=0;
        int n=nums.size();
        int maxCnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                currCnt++;
                if(currCnt>maxCnt){
                    maxCnt=currCnt;
                }
            }
            else currCnt=0;
        }
        return maxCnt;
    }
};