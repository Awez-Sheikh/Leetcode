class Solution {
    public int characterReplacement(String s, int k) {
        int[] arr = new int[26];
        int l = 0;
        int max_len = 0;
        int max_freq = 0;

        for(int r=0; r<s.length(); r++){
            arr[s.charAt(r)-'A']++;   // 

            max_freq = Math.max(max_freq,arr[s.charAt(r)-'A']); // window size

            int window_size = r-l+1;

            if(window_size - max_freq > k){
                arr[s.charAt(l)-'A']--;
                l++;                        // shrink window size 
            } 

            max_len = Math.max(max_len,r-l+1);
        }
        return max_len; 
    }
}