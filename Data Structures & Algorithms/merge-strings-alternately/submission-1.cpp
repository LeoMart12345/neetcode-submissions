class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        std::string word3;

        for(int i = 0; i < std::max(len1, len2); ++i){
            if(i < len1) word3 += word1[i];
            if(i < len2) word3 += word2[i];
        }
        return word3;
    }
};