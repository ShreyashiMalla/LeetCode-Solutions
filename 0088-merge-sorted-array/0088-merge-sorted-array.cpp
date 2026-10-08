class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;//"i" is at the last real number in nums1.As m=3 so last index will be 0,1,2.To optain index 2 we have done this.
        int j=n-1;//"j" is at the last real number in num2. 
        int k=m+n-1;//"k" is pointer at the last place of the merge array 
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;

        }
        while(j>=0){
            nums1[k]=nums2[j];
            j--;
            k--;
        }        
    }
};