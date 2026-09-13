class Solution {

    public int total = 0;

    public int rob(int[] nums) {

        int len = nums.length;

        int[] poop = new int[len];

        if(len==0) {
            return 0;
        }

        if(len==1) {
            return nums[0];
        }

        poop[0] = nums[0];
        poop[1] = Math.max(nums[0], nums[1]);

        for(int i = 2; i<len; i++) {
            poop[i] = Math.max(nums[i] + poop[i-2], poop[i-1]);
        }

        return poop[len-1];



        // [2, 4, 3, 4, 8, 1, 6, 3, 9, 2, ]
        // [2, 4, 5, ]
        // [1, 1, 3, 3]

    }

    public int calculateNextIndex(int[] nums, int startIndex) {

        int firstIdx = startIndex+2;
        int secondIdx = startIndex+3;
        int thirdIdx = startIndex+4;

        int first = nums[firstIdx];
        int second = nums[secondIdx];
        int third = nums[thirdIdx];

        int combine = first+third;

        if(second>combine) {
            total+=second;
            return secondIdx;
        } else {
            total+=first;
            return firstIdx;
        }

    }

    public int getRelativeIndexOfMax(int[] nums) {
        return (nums[0] >= nums[1]) ? 0 : 1;
    }



}
