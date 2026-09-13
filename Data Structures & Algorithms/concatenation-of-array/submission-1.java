class Solution {
    public int[] getConcatenation(int[] nums) {
        int len = nums.length;
        int[] ans = new int[2*len];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.length; j++) {
                int index = i*len + j;
                ans[index] = nums[j];
            }
        }
    return ans;
    }
}