class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int curr = 0;
        while(l <= r){
            curr = (l + r) / 2;
            
            if(target < nums[curr]){
                r = curr - 1;
            }else if(target > nums[curr]){
                l = curr + 1;
            }
            else if(nums[curr] == target){
                return curr;
            };

        }
        return -1;
    }
};