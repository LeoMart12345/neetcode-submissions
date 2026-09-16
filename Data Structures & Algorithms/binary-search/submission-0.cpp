class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int current = (l + r) / 2;

            if(target < nums[current]){
                r = current - 1;
            }else if(target > nums[current]){
                l = current + 1;
            }
            else if(nums[current] == target){
                return current;
            }
        }
        return - 1;
    }
};
