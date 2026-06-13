class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> freqMap;
        int done = nums.size() / 2;

        for(int i = 0; i < nums.size(); ++i){
            freqMap[nums[i]]++;
            if(freqMap[nums[i]] > done){
                return nums[i];
            }    
        }
        return -1;
    }
};