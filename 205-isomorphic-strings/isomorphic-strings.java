class Solution {
    public boolean isIsomorphic(String s, String t) {

        if (s.length() != t.length())
            return false;

        HashMap<Character, Character> mpp = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {

            char sch = s.charAt(i);
            char tch = t.charAt(i);

            if (!mpp.containsKey(sch) && !mpp.containsValue(tch)) {
                mpp.put(sch, tch);
            }
            else if (mpp.containsKey(sch)) {
                if (mpp.get(sch) != tch) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return true;
    }
}