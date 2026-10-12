class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;

        for(const string& s : strs){
            std::string key = s;
            std::sort(key.begin(), key.end());

            groups[key].emplace_back(s);
        }

        std::vector<std::vector<std::string>> result;

        for(auto [key, group] : groups){
            result.emplace_back(group);
        }
        return result;
    }
};
