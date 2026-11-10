class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // i points to the last actual element in nums1, like m = 3 means actual elements are at indices 0, 1, 2
        int i=m-1;
        // j points to the last element in nums2
        int j=n-1;
        // k points to the last index of nums1, where we will place the largest element
        int k= m+n-1;
        // Continue while both arrays have elements left
        while(i>=0 && j>=0){
            // Compare the current elements of both arrays
            if(nums1[i]>nums2[j]){
                // nums1[i] is larger, so place it at index k
                nums1[k]=nums1[i];
                // Move i to the previous element in nums1
                i--;
            }
            else{
                // nums2[j] is larger or equal, so place it at index k
                nums1[k]=nums2[j];
                // Move j to the previous element in nums2
                j--;
                //fun
            }
            // Move k one position to the left, because the current position is filled
            k--;
        }

        // If nums2 still has elements, copy them into nums1
        while(j>=0){
            nums1[k]=nums2[j];
            // Move to the previous element in nums2
            j--;
            k--;
        }
    }
};