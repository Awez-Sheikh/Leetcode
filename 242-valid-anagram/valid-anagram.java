class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()) return false;
        Map<Character,Integer> mpp1 = new HashMap<>();
        Map<Character,Integer> mpp2 = new HashMap<>();
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(mpp1.containsKey(ch)){
                mpp1.put(ch,mpp1.get(ch)+1);
            }else{
                mpp1.put(ch,1);
            }
        }

        for(int i=0; i<t.length(); i++){
            char ch = t.charAt(i);
            if(mpp2.containsKey(ch)){
                mpp2.put(ch,mpp2.get(ch)+1);
            }else{
                mpp2.put(ch,1);
            }
        }

        return mpp1.equals(mpp2);
    }
}