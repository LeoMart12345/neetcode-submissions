class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(string s : strs){
            string key = s; // make a copy first;
            sort(key.begin(), key.end()); //sort the copy
            groups[key].push_back(s);
        }
        //convert to a vec
        std::vector<std::vector<std::string>> results;
        for(auto& pair : groups){
            results.push_back(pair.second);
        }
        return results;
    }
};
