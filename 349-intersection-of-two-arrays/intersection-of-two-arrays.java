import java.util.*;

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {

        HashSet<Integer> set = new HashSet<>();

        for (int num : nums1) {
            set.add(num);
        }

        ArrayList<Integer> arrlst = new ArrayList<>();

        for (int i = 0; i < nums2.length; i++) {

            if (set.contains(nums2[i])) {
                arrlst.add(nums2[i]);
                set.remove(nums2[i]);
            }
        }

        int[] ans = new int[arrlst.size()];

        for (int i = 0; i < arrlst.size(); i++) {
            ans[i] = arrlst.get(i);
        }

        return ans;
    }
}