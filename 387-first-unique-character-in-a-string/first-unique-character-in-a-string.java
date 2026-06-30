class Solution {
    public int firstUniqChar(String s) {
        Map<Character,Integer> mpp = new HashMap<>();
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(mpp.containsKey(ch)){
                mpp.put(ch,mpp.get(ch)+1);
            }else{
                mpp.put(ch,1);
            }
        }

        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(mpp.get(ch) == 1){
                return i;
            }
        }

        return -1;
    }
}