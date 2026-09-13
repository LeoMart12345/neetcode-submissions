class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1; //
        int i = m-1; // end of the first vector (valid points)
        int j = n-1; // end of the second vectory

        // Merge from the back

        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[last] = nums1[i];
                i--;
                last--;
            }
            else
            {
                nums1[last] = nums2[j]; 
                j--;
                last--;
            }
        }
    }
};