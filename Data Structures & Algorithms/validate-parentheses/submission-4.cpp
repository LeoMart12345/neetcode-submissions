class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        if(s.empty()) return false; 
        for(char c : s){
            if(c == '{' or c == '[' or c == '(' ){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                
                char top = st.top();

                if(c == '}' && top != '{' or
                c == ']' && top != '[' or
                c == ')' && top != '(')
                return false;
                
                st.pop();
            }

        }
        if(st.empty()) return true;

        return false;
    }
};