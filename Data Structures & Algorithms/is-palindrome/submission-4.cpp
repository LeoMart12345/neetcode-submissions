class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while(l < r){
            while(l < r && !std::isalnum(s[r])){
                r--;
            }
            while(l < r && !std::isalnum(s[l])){
                l++;
            }
            if(std::tolower(s[l]) != std::tolower(s[r])) return false;
            r--;
            l++;
        }
        return true;
    }
};
