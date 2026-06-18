class Solution {
public:
    int climbStairs(int n) {
        int back1 = 1;
        int back2 = 1;
        int current = 1;

        for(int i = 2; i <= n; ++i){
            current = back1 + back2;
            back2 = back1;
            back1 = current;
        }
        return current;
    }
};
