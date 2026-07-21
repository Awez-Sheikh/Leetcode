class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max_len = 0;
        int len = 0;
        int n = s.length();
        int r = 0;
        int l = 0;
        HashSet<Character> set = new HashSet<>();
        while(r<n){
            if(set.contains(s.charAt(r))){
                set.remove(s.charAt(l));
                l++;
            }else{
                len = r-l+1;
                if(len>max_len) max_len=len;
                set.add(s.charAt(r));
                r++;
            }
        }
        return max_len;    
    }
}