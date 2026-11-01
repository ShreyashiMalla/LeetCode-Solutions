class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // k represents the position where the next unique number goes
        int k=1; // First element is already unique
        if(nums.size()==0) return 0; 
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i]; // Store the new unique number at position k
                k++;// Move k to the next position
            }

        }
        return k;       
    }
};