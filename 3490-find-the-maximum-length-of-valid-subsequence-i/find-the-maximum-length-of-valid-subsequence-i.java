public class Solution {
    public int maximumLength(int[] nums) {
        int n = nums.length;
        int alter = 1;
        int odd = 0;
        int even = 0;
        if (nums[0] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        boolean lastodd = nums[0] % 2 != 0;
        for (int i = 1; i < n; i++) {
            boolean flag = nums[i] % 2 == 0;
            if (flag) {
                if (lastodd) {
                    alter++;
                    lastodd = false;
                }
                even++;
            } else {
                if (!lastodd) {
                    alter++;
                    lastodd = true;
                }
                odd++;
            }
        }
        return Math.max(alter, Math.max(odd, even));
    }
}
