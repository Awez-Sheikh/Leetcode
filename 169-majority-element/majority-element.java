class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> mpp = new HashMap<>();

        for(int i = 0; i < nums.length; i++) {
            if (mpp.containsKey(nums[i])) {
                mpp.put(nums[i], mpp.get(nums[i]) + 1);
            } else {
                mpp.put(nums[i], 1);
            }
        }

        int maxValue = 0;
        int ans = 0;
        for(int key: mpp.keySet()){
            if(mpp.get(key)>maxValue){
                maxValue = mpp.get(key);
                ans = key;
            }
        }

        return ans;
    }
}