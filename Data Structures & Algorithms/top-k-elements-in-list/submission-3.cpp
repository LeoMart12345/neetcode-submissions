class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> results;
        std::unordered_map<int, int> freqTable;

        for(int i : nums){
            freqTable[i]++;
        }

        std::vector<std::pair<int, int>> pairs(freqTable.begin(), freqTable.end());
        // Highest first.
        std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        for(int i = 0; i < k; ++i){
            results.emplace_back(pairs[i].first);
        }

        return results;
    }
};
