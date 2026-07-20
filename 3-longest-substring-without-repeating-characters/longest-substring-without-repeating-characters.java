class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len = 0;
        int len = 0;
        for (int i=0; i<s.length(); i++){
            int[] hash = new int[256];
            Arrays.fill(hash,0);
            for(int j=i; j<s.length(); j++){
                if(hash[s.charAt(j)] == 1) break;
                hash[s.charAt(j)] += 1;
                len = j-i+1;
                if(max_len < len) max_len = len;
            }
        }
        return max_len;    
    }
}