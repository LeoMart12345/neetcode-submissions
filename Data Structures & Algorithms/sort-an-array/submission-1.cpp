class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }

private:
    void quickSort(vector<int>& nums, int left, int right){
        if(left >= right) return;
        int p = partition(nums, left, right);
        quickSort(nums, left, p - 1);
        quickSort(nums, p + 1, right);
    }

    int partition(vector<int>& nums, int left, int right){
        int pivotIdx = left + (right - left) / 2;
        int pivot = nums[pivotIdx];

        // move the pivot to the end
        int temp = nums[pivotIdx];
        nums[pivotIdx] = nums[right];
        nums[right] = temp;

        //partition:
        int i = left;
        for(int j = left; j < right; ++j){
            if(nums[j] <= pivot){
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                ++i;
            }
        }
            temp = nums[i];
            nums[i] = nums[right];
            nums[right] = temp;
            return i;
        }


};